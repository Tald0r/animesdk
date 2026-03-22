#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_330;
class Class_0_16E4307DCC419505_332;
class Class_3_DEF6B8E2ED2D1FB3;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E7DDD27CF15FB094_METHOD_1_1A6E8FF4E20344BF_OFFSET UNITYSDK_OFFSET(0x7ADA9B0)
#define CLASS_1_E7DDD27CF15FB094_METHOD_1_23D70CEE089430BE_OFFSET UNITYSDK_OFFSET(0x7ADA7D0)
#define CLASS_1_E7DDD27CF15FB094_METHOD_1_75D342994F4FD41F_OFFSET UNITYSDK_OFFSET(0x7ADAF40)
#define CLASS_1_E7DDD27CF15FB094_METHOD_1_D9D3B397A53C54A4_OFFSET UNITYSDK_OFFSET(0x7ADAE90)
#define CLASS_1_E7DDD27CF15FB094__CTOR_OFFSET UNITYSDK_OFFSET(0x7ADAE80)

inline static constexpr unsigned int Class_1_E7DDD27CF15FB094_TypeDefinitionIndex = 66970;

class Class_1_E7DDD27CF15FB094 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* Field_1_2; // 0x10
	::Class_3_DEF6B8E2ED2D1FB3* Field_1_1; // 0x18
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7DDD27CF15FB094__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_23D70CEE089430BE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E7DDD27CF15FB094_METHOD_1_23D70CEE089430BE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_330* Method_1_1A6E8FF4E20344BF(::Class_3_DEF6B8E2ED2D1FB3* a1, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_330*(*)(::PVOID, ::Class_3_DEF6B8E2ED2D1FB3*, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>*))((::PBYTE)hIl2Cpp + CLASS_1_E7DDD27CF15FB094_METHOD_1_1A6E8FF4E20344BF_OFFSET))(this, a1, a2);
	}

	static ::Class_1_E7DDD27CF15FB094* Method_1_D9D3B397A53C54A4(::Class_3_DEF6B8E2ED2D1FB3* a1, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* a2)
	{
		return ((::Class_1_E7DDD27CF15FB094*(*)(::Class_3_DEF6B8E2ED2D1FB3*, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>*))((::PBYTE)hIl2Cpp + CLASS_1_E7DDD27CF15FB094_METHOD_1_D9D3B397A53C54A4_OFFSET))(a1, a2);
	}

	::System::Void Method_1_75D342994F4FD41F(::Class_0_16E4307DCC419505_332*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_332*&))((::PBYTE)hIl2Cpp + CLASS_1_E7DDD27CF15FB094_METHOD_1_75D342994F4FD41F_OFFSET))(this, a1);
	}
};
