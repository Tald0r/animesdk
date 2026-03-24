#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xCAD26B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xCAD2730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventMaterialPropertyModifierEntry_TypeDefinitionIndex = 76286;

	class AnimatorEventMaterialPropertyModifierEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::MoleMole::Battle::MaterialPropertyModifierExtraParams ExtraParams; // 0x58
		::System::String* Key; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* RenderList; // 0x80
		::System::String* AttachPoint; // 0x88
		::System::String* Tag; // 0x90
		::System::Int32 Priority; // 0x98
		::System::Boolean ApplyAllRenderers; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMATERIALPROPERTYMODIFIERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}
