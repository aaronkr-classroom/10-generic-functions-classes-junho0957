//my_algs.h
#ifndef GUARD_my_algs_h
#define GUARD_my_algs_h

template<class T>
T max(const T& left, const T& right) {
	return left > right ?
		left : 
		right;
}


template<class T>
T min(const T& left, const T& right) {
	return left < right ?
		left :
		right;
}


template<class T>
bool equals(const T& left, const T& right) {
	return left = right ?
		true :
		false;
}

#endif