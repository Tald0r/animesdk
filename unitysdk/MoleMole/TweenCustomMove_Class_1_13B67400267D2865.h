#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace MoleMole { class TweenCustomMove; }

#define MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_13B67400267D2865_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x8CAAC10)
#define MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_13B67400267D2865_METHOD_1_F33CE23F149D6C15_OFFSET UNITYSDK_OFFSET(0x8CAAC20)
#define MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_13B67400267D2865__CTOR_OFFSET UNITYSDK_OFFSET(0x8CAAC00)

namespace MoleMole
{
	inline static constexpr unsigned int TweenCustomMove_Class_1_13B67400267D2865_TypeDefinitionIndex = 51234;

	class TweenCustomMove_Class_1_13B67400267D2865 : public ::System::Object
	{
	public:
		::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* Field_1_1; // 0x10
		::MoleMole::TweenCustomMove* Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_13B67400267D2865__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4A41C63BFE58D26F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_13B67400267D2865_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_1_F33CE23F149D6C15()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_CLASS_1_13B67400267D2865_METHOD_1_F33CE23F149D6C15_OFFSET))(this);
		}
	};
}
