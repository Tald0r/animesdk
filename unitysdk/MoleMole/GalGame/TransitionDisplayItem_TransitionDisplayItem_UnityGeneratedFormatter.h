#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/TransitionDisplayItem_ItemType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TransitionDisplayItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xD0E3940)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xD0E3950)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xD0E3CC0)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0E3F30)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E3EF0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionDisplayItem_TransitionDisplayItem_UnityGeneratedFormatter_TypeDefinitionIndex = 80794;

	class TransitionDisplayItem_TransitionDisplayItem_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::TransitionDisplayItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionDisplayItem_TransitionDisplayItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41A10);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::TransitionDisplayItem_ItemType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::TransitionDisplayItem_ItemType>**)Il2CppClass::FromTypeDefinitionIndex(TransitionDisplayItem_TransitionDisplayItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41A18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TransitionDisplayItem_TransitionDisplayItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41A20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TransitionDisplayItem*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TransitionDisplayItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::TransitionDisplayItem*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TransitionDisplayItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_TRANSITIONDISPLAYITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
