#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define MOLEMOLE_TWEENCUSTOMMOVE___C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xB9CF4C0)
#define MOLEMOLE_TWEENCUSTOMMOVE___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB9CF4B0)
#define MOLEMOLE_TWEENCUSTOMMOVE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9CF460)
#define MOLEMOLE_TWEENCUSTOMMOVE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9CF4A0)

namespace MoleMole
{
	inline static constexpr unsigned int TweenCustomMove___c_TypeDefinitionIndex = 51236;

	class TweenCustomMove___c : public ::System::Object
	{
	public:
		static ::DG::Tweening::TweenCallback** StaticGet___9__19_2()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(TweenCustomMove___c_TypeDefinitionIndex)->GetStaticField(0x394F0);
		}
		static ::MoleMole::TweenCustomMove___c** StaticGet___9()
		{
			return (::MoleMole::TweenCustomMove___c**)Il2CppClass::FromTypeDefinitionIndex(TweenCustomMove___c_TypeDefinitionIndex)->GetStaticField(0x394F8);
		}
		static ::DG::Tweening::TweenCallback** StaticGet___9__19_1()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(TweenCustomMove___c_TypeDefinitionIndex)->GetStaticField(0x39500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE___C_METHOD_1_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_1_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE___C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
		}
	};
}
