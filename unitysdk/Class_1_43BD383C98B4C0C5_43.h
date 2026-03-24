#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2C110B1E0925E7B4.h"
#include "unitysdk/Struct_2_D3FBEE9DE3F34F60.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_3_F148AC909A53601D;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
template <typename T1, typename T2> class Class_1_D4CCA64101A9C471;

#define CLASS_1_43BD383C98B4C0C5_43__CCTOR_OFFSET UNITYSDK_OFFSET(0x88EE2E0)
#define CLASS_1_43BD383C98B4C0C5_43__CTOR_OFFSET UNITYSDK_OFFSET(0x88EE2A0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_43_TypeDefinitionIndex = 80856;

class Class_1_43BD383C98B4C0C5_43 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_43BD383C98B4C0C5_43_TypeDefinitionIndex)->GetStaticField(0x10470);
	}
	::Class_1_D4CCA64101A9C471<::System::UInt32, ::System::UInt32>* Field_1_11; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::Action* Field_1_13; // 0x20
	::Class_3_F148AC909A53601D* Field_1_12; // 0x28
	::Struct_2_D3FBEE9DE3F34F60 Field_1_4; // 0x30
	::System::Action* Field_1_8; // 0x58
	::System::Func_1<::System::String*>* Field_1_3; // 0x60
	::System::String* Field_1_2; // 0x68
	::System::Object* Field_1_16; // 0x70
	::System::Int32 Field_1_0; // 0x78
	::System::Boolean Field_1_15; // 0x7C
	::System::Boolean Field_1_1; // 0x7D
	::System::Boolean Field_1_6; // 0x7E
	::System::Int32 Field_1_14; // 0x80
	::System::Int32 Field_1_18; // 0x84
	::System::Int32 Field_1_10; // 0x88
	::Enum_3_2C110B1E0925E7B4 Field_1_5; // 0x8C
	::System::Nullable_1<::System::Single> Field_1_9; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_43__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_43__CCTOR_OFFSET))();
	}
};
