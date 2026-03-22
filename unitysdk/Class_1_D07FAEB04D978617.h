#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_2_18804FF7C23FF19F;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D07FAEB04D978617_METHOD_1_6AAB3D4DBB3B0A06_OFFSET UNITYSDK_OFFSET(0x9F9B3E0)
#define CLASS_1_D07FAEB04D978617__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9B270)

inline static constexpr unsigned int Class_1_D07FAEB04D978617_TypeDefinitionIndex = 38419;

class Class_1_D07FAEB04D978617 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowEntity* Field_1_1; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* Field_1_0; // 0x18
	::Class_2_18804FF7C23FF19F* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_7; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::MoleMole::HollowChessboard::HollowCell Field_1_4; // 0x34
	::MoleMole::HollowChessboard::HollowCell Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D07FAEB04D978617__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_1_6AAB3D4DBB3B0A06()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D07FAEB04D978617_METHOD_1_6AAB3D4DBB3B0A06_OFFSET))(this);
	}
};
