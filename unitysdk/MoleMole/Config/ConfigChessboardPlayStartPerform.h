#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYSTARTPERFORM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xC230E40)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYSTARTPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xC230F20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPlayStartPerform_TypeDefinitionIndex = 42684;

	class ConfigChessboardPlayStartPerform : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* VideoAccelerationNormal; // 0x18
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* VideoAccelerationClicked; // 0x20
		::System::String* EffectKey; // 0x28
		::System::Int32 ShuttleSoundEventID; // 0x30
		::System::Int32 VideoAllowSkipStartFrame; // 0x34
		::System::Int32 BackgroundSoundEventID; // 0x38
		::System::Boolean VideoAllowSkip; // 0x3C
		::MoleMole::Config::ScreenEffectType EffectType; // 0x40
		::System::Int32 VideoAccelerationStartFrame; // 0x44
		::System::Int32 AcceleratedShuttleSoundEventID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYSTARTPERFORM__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYSTARTPERFORM_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
