#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalJumpChapterNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xC2212E0)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xC2212F0)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xC221710)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2219D0)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC221990)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalJumpChapterNode_GalJumpChapterNode_UnityGeneratedFormatter_TypeDefinitionIndex = 55982;

	class GalJumpChapterNode_GalJumpChapterNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalJumpChapterNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalJumpChapterNode_GalJumpChapterNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43F40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalJumpChapterNode_GalJumpChapterNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43F48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalJumpChapterNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalJumpChapterNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::GalJumpChapterNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalJumpChapterNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_GALJUMPCHAPTERNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
