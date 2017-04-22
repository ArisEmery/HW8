//
// Created by Aris  Emery on 4/17/17.
//

#ifndef ITAK_KEYVALUE_H
#define ITAK_KEYVALUE_H
template <class K, class V>
class KeyValue {
public:
    K m_key;
    V m_value;
    KeyValue(){};
    KeyValue(K key, V value){
        m_key=key;
        m_value=value;
    };
    K getKey(){return m_key;};
    V getValue(){return m_value;};
};
#endif //ITAK_KEYVALUE_H
