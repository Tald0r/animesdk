#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardSlotMachine; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_051B8081F92F411F_METHOD_4_18155128CE120193_OFFSET UNITYSDK_OFFSET(0x69AD3E0)
#define CLASS_4_051B8081F92F411F_METHOD_4_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x69ADDF0)
#define CLASS_4_051B8081F92F411F_METHOD_4_484A5E36F1DEDF51_OFFSET UNITYSDK_OFFSET(0x69ACB80)
#define CLASS_4_051B8081F92F411F_METHOD_4_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x69ACCD0)
#define CLASS_4_051B8081F92F411F_METHOD_4_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x69ADD80)
#define CLASS_4_051B8081F92F411F_METHOD_4_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x69ADB90)
#define CLASS_4_051B8081F92F411F_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x69ADD90)
#define CLASS_4_051B8081F92F411F__CTOR_OFFSET UNITYSDK_OFFSET(0x69ADD30)

inline static constexpr unsigned int Class_4_051B8081F92F411F_TypeDefinitionIndex = 40255;

class Class_4_051B8081F92F411F : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::MoleMole::Config::ConfigChessboardSlotMachine* Field_4_2; // 0x40
	::MoleMole::UIHollowMainPageController* Field_4_1; // 0x48
	::System::Single Field_4_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_484A5E36F1DEDF51(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F_METHOD_4_484A5E36F1DEDF51_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F_METHOD_4_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_4_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F_METHOD_4_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_4_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F_METHOD_4_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F_METHOD_4_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_4_18155128CE120193(::System::Int32 a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Collections::Generic::IList_1<::MoleMole::HollowChessboard::HollowCell>* a3, ::System::Single a4)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::IList_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F_METHOD_4_18155128CE120193_OFFSET))(this, a1, a2, a3, a4);
	}
};
