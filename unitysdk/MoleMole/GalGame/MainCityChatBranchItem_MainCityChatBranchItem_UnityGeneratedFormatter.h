#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF1B2700)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF1B2710)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xF1B2910)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF1B2AD0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xF1B2A90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBranchItem_MainCityChatBranchItem_UnityGeneratedFormatter_TypeDefinitionIndex = 38834;

	class MainCityChatBranchItem_MainCityChatBranchItem_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatBranchItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBranchItem_MainCityChatBranchItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42400);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBranchItem*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBranchItem*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_MAINCITYCHATBRANCHITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
