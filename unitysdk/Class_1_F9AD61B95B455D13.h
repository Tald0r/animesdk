#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_186;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F9AD61B95B455D13_METHOD_1_190363EC95E7AC6D_OFFSET UNITYSDK_OFFSET(0x906F340)
#define CLASS_1_F9AD61B95B455D13_METHOD_1_24B9B56F9112B099_OFFSET UNITYSDK_OFFSET(0x906F110)
#define CLASS_1_F9AD61B95B455D13_METHOD_1_263068012F712177_OFFSET UNITYSDK_OFFSET(0x906F210)
#define CLASS_1_F9AD61B95B455D13_METHOD_1_733CA18BFB9A2EE1_OFFSET UNITYSDK_OFFSET(0x906F460)
#define CLASS_1_F9AD61B95B455D13_METHOD_1_D543C6723125367E_OFFSET UNITYSDK_OFFSET(0x906F200)
#define CLASS_1_F9AD61B95B455D13__CTOR_OFFSET UNITYSDK_OFFSET(0x906F100)

inline static constexpr unsigned int Class_1_F9AD61B95B455D13_TypeDefinitionIndex = 45232;

class Class_1_F9AD61B95B455D13 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9AD61B95B455D13__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_186* Method_1_24B9B56F9112B099(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_186*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F9AD61B95B455D13_METHOD_1_24B9B56F9112B099_OFFSET))(this, a1);
	}

	::System::Void Method_1_D543C6723125367E(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F9AD61B95B455D13_METHOD_1_D543C6723125367E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_263068012F712177(::System::String* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F9AD61B95B455D13_METHOD_1_263068012F712177_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_190363EC95E7AC6D(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_F9AD61B95B455D13_METHOD_1_190363EC95E7AC6D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_733CA18BFB9A2EE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9AD61B95B455D13_METHOD_1_733CA18BFB9A2EE1_OFFSET))(this);
	}
};
