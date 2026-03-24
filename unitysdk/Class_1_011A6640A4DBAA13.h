#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E1CB1C590A13A80C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_011A6640A4DBAA13_METHOD_1_5FF43DD77C86F214_OFFSET UNITYSDK_OFFSET(0x97935D0)
#define CLASS_1_011A6640A4DBAA13_METHOD_1_79337F6ED6354FF6_OFFSET UNITYSDK_OFFSET(0x9793510)
#define CLASS_1_011A6640A4DBAA13__CTOR_OFFSET UNITYSDK_OFFSET(0x9793400)

inline static constexpr unsigned int Class_1_011A6640A4DBAA13_TypeDefinitionIndex = 64812;

class Class_1_011A6640A4DBAA13 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E1CB1C590A13A80C*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_011A6640A4DBAA13__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_79337F6ED6354FF6(::System::Int32 a1, ::Class_1_E1CB1C590A13A80C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_E1CB1C590A13A80C*))((::PBYTE)hIl2Cpp + CLASS_1_011A6640A4DBAA13_METHOD_1_79337F6ED6354FF6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5FF43DD77C86F214(::System::Int32 a1, ::Class_1_E1CB1C590A13A80C*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_E1CB1C590A13A80C*&))((::PBYTE)hIl2Cpp + CLASS_1_011A6640A4DBAA13_METHOD_1_5FF43DD77C86F214_OFFSET))(this, a1, a2);
	}
};
