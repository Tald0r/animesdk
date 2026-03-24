#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGamePictureDisplayAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB5E91B0)
#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xB5E91C0)
#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xB5E9310)
#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5E9470)
#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E9430)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGamePictureDisplayAction_GalGamePictureDisplayAction_UnityGeneratedFormatter_TypeDefinitionIndex = 39997;

	class GalGamePictureDisplayAction_GalGamePictureDisplayAction_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalGamePictureDisplayAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalGamePictureDisplayAction_GalGamePictureDisplayAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34070);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGamePictureDisplayAction*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGamePictureDisplayAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::GalGamePictureDisplayAction*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGamePictureDisplayAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION_GALGAMEPICTUREDISPLAYACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
