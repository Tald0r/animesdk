#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B6C23C27CF8ABBD8;
class Class_3_4A628DAD59F70BCB_4;
class Class_3_BE75AAF0F7C40C75_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D5C680EE0D19255_METHOD_1_0805C7EDAA0D7B63_OFFSET UNITYSDK_OFFSET(0xCF171A0)
#define CLASS_1_3D5C680EE0D19255_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0xCF17300)
#define CLASS_1_3D5C680EE0D19255_METHOD_1_BDE65CEC092FFD5C_OFFSET UNITYSDK_OFFSET(0xCF17360)
#define CLASS_1_3D5C680EE0D19255_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xCF17410)
#define CLASS_1_3D5C680EE0D19255__CTOR_OFFSET UNITYSDK_OFFSET(0xCF17120)

inline static constexpr unsigned int Class_1_3D5C680EE0D19255_TypeDefinitionIndex = 49563;

class Class_1_3D5C680EE0D19255 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_B6C23C27CF8ABBD8*>* Field_1_1; // 0x10
	::Class_1_B6C23C27CF8ABBD8* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D5C680EE0D19255__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0805C7EDAA0D7B63(::Class_3_4A628DAD59F70BCB_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4A628DAD59F70BCB_4*))((::PBYTE)hIl2Cpp + CLASS_1_3D5C680EE0D19255_METHOD_1_0805C7EDAA0D7B63_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_B6C23C27CF8ABBD8*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B6C23C27CF8ABBD8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D5C680EE0D19255_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_1_BDE65CEC092FFD5C(::Class_3_BE75AAF0F7C40C75_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BE75AAF0F7C40C75_2*))((::PBYTE)hIl2Cpp + CLASS_1_3D5C680EE0D19255_METHOD_1_BDE65CEC092FFD5C_OFFSET))(this, a1);
	}

	::Class_1_B6C23C27CF8ABBD8* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_B6C23C27CF8ABBD8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D5C680EE0D19255_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
