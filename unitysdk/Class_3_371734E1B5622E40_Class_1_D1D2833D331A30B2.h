#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_371734E1B5622E40_Class_1_7B821538BD9E3A5B;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIFullScreenVideoV2PopInNormalWindowController; }
namespace System { class Action; }

#define CLASS_3_371734E1B5622E40_CLASS_1_D1D2833D331A30B2_METHOD_1_415A75B2E7C4EA38_OFFSET UNITYSDK_OFFSET(0x15F44860)
#define CLASS_3_371734E1B5622E40_CLASS_1_D1D2833D331A30B2_METHOD_1_E217F07E6B12A06A_OFFSET UNITYSDK_OFFSET(0x15F449B0)
#define CLASS_3_371734E1B5622E40_CLASS_1_D1D2833D331A30B2__CTOR_OFFSET UNITYSDK_OFFSET(0x15F44850)

inline static constexpr unsigned int Class_3_371734E1B5622E40_Class_1_D1D2833D331A30B2_TypeDefinitionIndex = 45154;

class Class_3_371734E1B5622E40_Class_1_D1D2833D331A30B2 : public ::System::Object
{
public:
	::MoleMole::UIFullScreenVideoV2PopInNormalWindowController* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::Class_3_371734E1B5622E40_Class_1_7B821538BD9E3A5B* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_371734E1B5622E40_CLASS_1_D1D2833D331A30B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_415A75B2E7C4EA38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_371734E1B5622E40_CLASS_1_D1D2833D331A30B2_METHOD_1_415A75B2E7C4EA38_OFFSET))(this);
	}

	::System::Void Method_1_E217F07E6B12A06A(::MoleMole::MultipleVideoPlayerManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + CLASS_3_371734E1B5622E40_CLASS_1_D1D2833D331A30B2_METHOD_1_E217F07E6B12A06A_OFFSET))(this, a1);
	}
};
