#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7F16E50)
#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7F16E90)
#define MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__PLAYCONTENTRECTTWEEN_B__8_2_OFFSET UNITYSDK_OFFSET(0x7F16EA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoArpeggioChapterTween___c_TypeDefinitionIndex = 43236;

	class MonoArpeggioChapterTween___c : public ::System::Object
	{
	public:
		static ::DG::Tweening::TweenCallback** StaticGet___9__8_2()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(MonoArpeggioChapterTween___c_TypeDefinitionIndex)->GetStaticField(0x38960);
		}
		static ::MoleMole::MonoArpeggioChapterTween___c** StaticGet___9()
		{
			return (::MoleMole::MonoArpeggioChapterTween___c**)Il2CppClass::FromTypeDefinitionIndex(MonoArpeggioChapterTween___c_TypeDefinitionIndex)->GetStaticField(0x38968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayContentRectTween_b__8_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOARPEGGIOCHAPTERTWEEN___C__PLAYCONTENTRECTTWEEN_B__8_2_OFFSET))(this);
		}
	};
}
