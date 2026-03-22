#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_06B506F3349584D7;
class Class_3_0886A771C4D53727_9;
class Class_3_3C711A620EE5733D_2;
class Class_3_8069852B6FA1A544_9;
class Class_3_AE02BC8285203464_32;
class Class_3_C3F0E3B5AB5977AE_44;
class Class_3_C72A494A14854863_3;
class Class_3_CFE48D402ECBB0B9_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_0B875F13C0CA4D38_OFFSET UNITYSDK_OFFSET(0x8BAEEF0)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_5A5F2C00302AB2A0_OFFSET UNITYSDK_OFFSET(0x8BAF090)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_1_OFFSET UNITYSDK_OFFSET(0x8BAFAD0)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_OFFSET UNITYSDK_OFFSET(0x8BAF340)
#define CLASS_1_6F5CF9250D96BBB9__CTOR_OFFSET UNITYSDK_OFFSET(0x8BAEBD0)

inline static constexpr unsigned int Class_1_6F5CF9250D96BBB9_TypeDefinitionIndex = 68399;

class Class_1_6F5CF9250D96BBB9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_11; // 0x18
	::System::Collections::Generic::List_1<::Class_3_3C711A620EE5733D_2*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_44*>* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* Field_1_1; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_4; // 0x48
	::System::Collections::Generic::List_1<::Class_3_0886A771C4D53727_9*>* Field_1_10; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x58
	::System::Collections::Generic::List_1<::Class_3_CFE48D402ECBB0B9_1*>* Field_1_3; // 0x60
	::System::Collections::Generic::List_1<::Class_3_C72A494A14854863_3*>* Field_1_12; // 0x68
	::System::UInt32 Field_1_0; // 0x70
	::System::Boolean Field_1_13; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0B875F13C0CA4D38(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_0B875F13C0CA4D38_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A5F2C00302AB2A0(::Class_3_06B506F3349584D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_06B506F3349584D7*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_5A5F2C00302AB2A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_62341E74E99EEE86(::Class_3_AE02BC8285203464_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_32*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_OFFSET))(this, a1);
	}

	::System::Void Method_1_62341E74E99EEE86_1(::Class_3_8069852B6FA1A544_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8069852B6FA1A544_9*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_1_OFFSET))(this, a1);
	}
};
