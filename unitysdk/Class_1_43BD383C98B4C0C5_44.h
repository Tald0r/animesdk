#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A097505A5A1A069_1.h"
#include "unitysdk/Enum_3_DAFCB1AA7EAADD66.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_44__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBE780)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_44_TypeDefinitionIndex = 77309;

class Class_1_43BD383C98B4C0C5_44 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_13; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_19; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_16; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_17; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_14; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_15; // 0x40
	::System::Int32 Field_1_4; // 0x48
	::MoleMole::Config::ConfigInteractionFanCylinder Field_1_9; // 0x4C
	::System::Boolean Field_1_5; // 0x74
	::Enum_3_4A097505A5A1A069_1 Field_1_6; // 0x75
	::System::Int32 Field_1_0; // 0x78
	::MoleMole::Config::ConfigInteractionFanCylinder Field_1_7; // 0x7C
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_3; // 0xA4
	::System::Boolean Field_1_18; // 0xAC
	::System::Boolean Field_1_8; // 0xAD
	::System::Boolean Field_1_12; // 0xAE
	::System::Boolean Field_1_11; // 0xAF
	::System::Int32 Field_1_2; // 0xB0
	::Enum_3_DAFCB1AA7EAADD66 Field_1_10; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_44__CTOR_OFFSET))(this);
	}
};
