#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/GraphUserObject_Option.h"
#include "unitysdk/NodeCanvas/Framework/GraphCustomData_Meta.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class DeserializeFunc; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace ParadoxNotion::Serialization::FullSerializer { class ISerializationCollector; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsCyclicReferenceManager; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Object; }

#define MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_ADDEXTRAHASHCODESTRING_OFFSET UNITYSDK_OFFSET(0x19F54D60)
#define MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_GETFORMATTERBYHASH_1_OFFSET UNITYSDK_OFFSET(0x19F54F60)
#define MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_GETFORMATTERBYHASH_OFFSET UNITYSDK_OFFSET(0x19F54DF0)
#define MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_GETTYPEBYHASH_OFFSET UNITYSDK_OFFSET(0x19F55010)
#define MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x19F549E0)
#define MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_TRYPOP_OFFSET UNITYSDK_OFFSET(0x19F54CB0)
#define MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_TRYPUSH_OFFSET UNITYSDK_OFFSET(0x19F54AD0)
#define MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F550C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphUserObject_TypeDefinitionIndex = 25441;

	class GraphUserObject : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* TempTypeHashAndTranslateName; // 0x10
		::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Type*>* typeHashMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* typeHashToFormatterIndex; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::DeserializeFunc*>* deserializeFuncs; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* UnityReferenceObjects; // 0x38
		::ParadoxNotion::Serialization::FullSerializer::fsCyclicReferenceManager* shared_ObjectRefManager; // 0x40
		::System::Object* activeSourceInstance; // 0x48
		::Il2CppArray<::NodeCanvas::Framework::GraphCustomData_Meta>* TypeHashAndTranslateNameMetas; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Type*>* extraHashCodeString; // 0x58
		::System::Collections::Generic::Stack_1<::ParadoxNotion::Serialization::FullSerializer::ISerializationCollector*>* _collectors; // 0x60
		::System::Int32 _collectableDepth; // 0x68
		::MessagePack::Formatters::GraphUserObject_Option binaryOption; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_RESET_OFFSET))(this);
		}

		::System::Void TryPush(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_TRYPUSH_OFFSET))(this, o);
		}

		::System::Void TryPop(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_TRYPOP_OFFSET))(this, o);
		}

		::System::Void AddExtraHashCodeString(::System::UInt32 hash, ::System::Type* codeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_ADDEXTRAHASHCODESTRING_OFFSET))(this, hash, codeType);
		}

		::System::Boolean GetFormatterByHash(::System::UInt32 hashType, ::System::Type*& valueType, ::MessagePack::Formatters::IMessagePackFormatter*& formatter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Type*&, ::MessagePack::Formatters::IMessagePackFormatter*&))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_GETFORMATTERBYHASH_OFFSET))(this, hashType, valueType, formatter);
		}

		::System::Type* GetTypeByHash(::System::UInt32 hash)
		{
			return ((::System::Type*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_GETTYPEBYHASH_OFFSET))(this, hash);
		}

		::MessagePack::Formatters::IMessagePackFormatter* GetFormatterByHash_1(::System::UInt32 hash)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHUSEROBJECT_GETFORMATTERBYHASH_1_OFFSET))(this, hash);
		}
	};
}
