#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D9172C07F82DDAE_CLASS_1_F7CE566549D7F74C_METHOD_1_7F58CAFA97903DFA_OFFSET UNITYSDK_OFFSET(0xD2504D0)
#define CLASS_2_9D9172C07F82DDAE_CLASS_1_F7CE566549D7F74C__CTOR_OFFSET UNITYSDK_OFFSET(0xD2504C0)

inline static constexpr unsigned int Class_2_9D9172C07F82DDAE_Class_1_F7CE566549D7F74C_TypeDefinitionIndex = 56256;

class Class_2_9D9172C07F82DDAE_Class_1_F7CE566549D7F74C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_F7CE566549D7F74C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7F58CAFA97903DFA(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_F7CE566549D7F74C_METHOD_1_7F58CAFA97903DFA_OFFSET))(this, a1);
	}
};
