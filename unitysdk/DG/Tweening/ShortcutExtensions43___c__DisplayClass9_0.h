#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Sequence; }
namespace UnityEngine { class Rigidbody2D; }

#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B736EA0)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__0_OFFSET UNITYSDK_OFFSET(0x1B7372D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__1_OFFSET UNITYSDK_OFFSET(0x1B737310)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__2_OFFSET UNITYSDK_OFFSET(0x1B737340)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__3_OFFSET UNITYSDK_OFFSET(0x1B7374E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__4_OFFSET UNITYSDK_OFFSET(0x1B737520)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions43___c__DisplayClass9_0_TypeDefinitionIndex = 32350;

	class ShortcutExtensions43___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody2D* target; // 0x10
		::DG::Tweening::Sequence* s; // 0x18
		::UnityEngine::Vector2 endValue; // 0x20
		::System::Boolean offsetYSet; // 0x28
		::System::Single startPosY; // 0x2C
		::System::Single offsetY; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOJump_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__0_OFFSET))(this);
		}

		::System::Void _DOJump_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__1_OFFSET))(this, x);
		}

		::System::Void _DOJump_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__2_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOJump_b__3()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__3_OFFSET))(this);
		}

		::System::Void _DOJump_b__4(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS9_0__DOJUMP_B__4_OFFSET))(this, x);
		}
	};
}
