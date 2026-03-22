#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B8B1A0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CONNECT_B__13_0_OFFSET UNITYSDK_OFFSET(0x18B8B1F0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8B1E0)

namespace CloudGame::MailBox::GameControl
{
	inline static constexpr unsigned int GameControl___c_TypeDefinitionIndex = 17584;

	class GameControl___c : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::GameControl::GameControl___c** StaticGet___9()
		{
			return (::CloudGame::MailBox::GameControl::GameControl___c**)Il2CppClass::FromTypeDefinitionIndex(GameControl___c_TypeDefinitionIndex)->GetStaticField(0xA010);
		}
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(GameControl___c_TypeDefinitionIndex)->GetStaticField(0xA018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__13_0(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CONNECT_B__13_0_OFFSET))(this, data);
		}
	};
}
