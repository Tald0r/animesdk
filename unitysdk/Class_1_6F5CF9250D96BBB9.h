#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3C711A620EE5733D;
class Class_3_42E99B6238AA7291_1;
class Class_3_AE02BC8285203464_42;
class Class_3_AE02BC8285203464_7;
class Class_3_C3F0E3B5AB5977AE_17;
class Class_3_C72A494A14854863;
class Class_3_CFE48D402ECBB0B9_1;
class Class_3_E7C36DE372980575;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_0B875F13C0CA4D38_OFFSET UNITYSDK_OFFSET(0x73F5A70)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_5A5F2C00302AB2A0_OFFSET UNITYSDK_OFFSET(0x73F4EE0)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_1_OFFSET UNITYSDK_OFFSET(0x73F5C10)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_OFFSET UNITYSDK_OFFSET(0x73F5190)
#define CLASS_1_6F5CF9250D96BBB9__CTOR_OFFSET UNITYSDK_OFFSET(0x73F4BC0)

inline static constexpr unsigned int Class_1_6F5CF9250D96BBB9_TypeDefinitionIndex = 55608;

class Class_1_6F5CF9250D96BBB9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_11; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_17*>* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::Class_3_3C711A620EE5733D*>* Field_1_2; // 0x30
	::System::Collections::Generic::List_1<::Class_3_CFE48D402ECBB0B9_1*>* Field_1_3; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x40
	::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_1*>* Field_1_10; // 0x48
	::System::Collections::Generic::List_1<::Class_3_C72A494A14854863*>* Field_1_12; // 0x50
	::System::Collections::Generic::List_1<::Class_3_E7C36DE372980575*>* Field_1_1; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x68
	::System::UInt32 Field_1_0; // 0x70
	::System::Boolean Field_1_13; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5A5F2C00302AB2A0(::Class_3_E7C36DE372980575* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7C36DE372980575*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_5A5F2C00302AB2A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_62341E74E99EEE86(::Class_3_AE02BC8285203464_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_7*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B875F13C0CA4D38(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_0B875F13C0CA4D38_OFFSET))(this, a1);
	}

	::System::Void Method_1_62341E74E99EEE86_1(::Class_3_AE02BC8285203464_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_42*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_1_OFFSET))(this, a1);
	}
};
