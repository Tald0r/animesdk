#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIAbyssS2RoleChallengeListWidgetController_AvatarEntranceType.h"
#include "unitysdk/MoleMole/UIAbyssS2RoleChallengeWidgetController_DifficultyType.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA;
class Class_2_14E7CE92E8A3183F;
class Class_2_208CC9941471731A_810;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A76EAD5D385CC920_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x90DF140)
#define CLASS_1_A76EAD5D385CC920__CTOR_OFFSET UNITYSDK_OFFSET(0x90DF130)

inline static constexpr unsigned int Class_1_A76EAD5D385CC920_TypeDefinitionIndex = 75654;

class Class_1_A76EAD5D385CC920 : public ::System::Object
{
public:
	::Class_2_14E7CE92E8A3183F* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_810*>* Field_1_8; // 0x18
	::Class_2_0A55B5A82A61DAFA* Field_1_4; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::MoleMole::Level::RatingType Field_1_3; // 0x2C
	::System::Int32 Field_1_0; // 0x30
	::System::Int32 Field_1_9; // 0x34
	::MoleMole::UIAbyssS2RoleChallengeWidgetController_DifficultyType Field_1_6; // 0x38
	::System::Int32 Field_1_1; // 0x3C
	::MoleMole::UIAbyssS2RoleChallengeListWidgetController_AvatarEntranceType Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A76EAD5D385CC920__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A76EAD5D385CC920_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
