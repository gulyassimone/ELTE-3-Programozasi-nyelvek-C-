#ifndef MAP_ARRAY_UTIL__H
#define MAP_ARRAY_UTIL__H
#include <map>
template <class T, class D, class... Args>
class map_array_util{
	typedef std::map<T, D, Args...> Map;
	Map& myMap;
	int size;
	
    public:
        map_array_util (Map& m ) : myMap(m), size(m.size()){}
		
		template<class E>
		void copy(E& arr, int pSize){
			int i = 0;
			for (typename std::map<T, D>::iterator itr = myMap.begin(); itr != myMap.end() || i < std::min(size, pSize); itr++) {				
				myMap[itr->first] = arr[i];
				i++;
			}
		}
		
		bool equals(D* arr, int pSize) const{
			if(size == pSize){
				int i = 0;
				for (typename std::map<T, D>::const_iterator itr = myMap.begin(); itr != myMap.end(); itr++){
					if(itr->second != arr[i]){
						return false;
					}
					i++;
				}
			}else{
				return false;
			}
			return true;
		}
		
		template<class U>
		void swap(U& arr, int pSize){
			int i = 0;
			for (typename std::map<T, D>::iterator itr = myMap.begin(); itr != myMap.end() || i < std::min(size, pSize); itr++) {	
				D temp = myMap[itr->first];			
				myMap[itr->first] = arr[i];
				arr[i] = temp;
				i++;
			}
			
		}
		
		template<class C>
		bool permutation(C& arr, int pSize) const{	
			for (typename std::map<T, D>::iterator itr = myMap.begin(); itr != myMap.end(); itr++) {	
				bool exist = false;
				for(int i = 0; i < pSize && !exist; i++){
					if(itr->second == arr[i]){
						exist = true;
					}
				}
				if(!exist){
					return false;
				}
			}
			return true;	
		}
		
		
		template<class F>
		void operator= (F& arr)
		{
			int size = sizeof(arr) / sizeof(arr[0]);
			int i = 0;
			for (typename std::map<T, D>::iterator itr = myMap.begin(); itr != myMap.end(); itr++) {	
				if(i < size){
					itr->second = arr[i];
				}
				i++;
			}
		}
};
#endif