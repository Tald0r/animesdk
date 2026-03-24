#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define LEVELUPPROGRESSWIDGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7435E00)
#define LEVELUPPROGRESSWIDGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7435E40)
#define LEVELUPPROGRESSWIDGET___C__PROGRESSBARANIM_B__13_1_OFFSET UNITYSDK_OFFSET(0x7435E50)

inline static constexpr unsigned int LevelUpProgressWidget___c_TypeDefinitionIndex = 65383;

class LevelUpProgressWidget___c : public ::System::Object
{
public:
	static ::DG::Tweening::TweenCallback** StaticGet___9__13_1()
	{
		return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(LevelUpProgressWidget___c_TypeDefinitionIndex)->GetStaticField(0x33A40);
	}
	static ::LevelUpProgressWidget___c** StaticGet___9()
	{
		return (::LevelUpProgressWidget___c**)Il2CppClass::FromTypeDefinitionIndex(LevelUpProgressWidget___c_TypeDefinitionIndex)->GetStaticField(0x33A48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET___C__CTOR_OFFSET))(this);
	}

	::System::Void _ProgressBarAnim_b__13_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET___C__PROGRESSBARANIM_B__13_1_OFFSET))(this);
	}
};
