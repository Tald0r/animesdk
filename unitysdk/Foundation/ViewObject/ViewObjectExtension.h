#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BAE21DD4C85AF7B9.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFlags.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectReadyFlags.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_C3F14E7E9EA24BAC.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3BC6FFBFA6077E08;
class Class_2_74BD0166ECF298D9;
class Class_2_BE71B422DBACB61A;
namespace Foundation::ViewObject { class ViewObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ADDREADYREQUIRE_OFFSET UNITYSDK_OFFSET(0x5F983E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ADD_OFFSET UNITYSDK_OFFSET(0x5F97DD0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ENABLE_OFFSET UNITYSDK_OFFSET(0x5F97EB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_FINDASSOCIATEDENTITY_OFFSET UNITYSDK_OFFSET(0x5F99280)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCURRENTSUITE_1_OFFSET UNITYSDK_OFFSET(0x5F9B7F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCURRENTSUITE_OFFSET UNITYSDK_OFFSET(0x5F9B8D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETDFSCRIPTBYGRAPHID_OFFSET UNITYSDK_OFFSET(0x5F9A700)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETDFSCRIPTSBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0x5F99CC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETENTITYHANDLE_OFFSET UNITYSDK_OFFSET(0x5F9B9B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETGROUPANDMEMID_OFFSET UNITYSDK_OFFSET(0x5F98FE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETMETAFLAGS_OFFSET UNITYSDK_OFFSET(0x5F998A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x5F98CE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETVIEWOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0x5F9BA50)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x5F98B10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASALL_OFFSET UNITYSDK_OFFSET(0x5F97D60)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASANY_OFFSET UNITYSDK_OFFSET(0x5F96BB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASHREADYFLAGS_OFFSET UNITYSDK_OFFSET(0x5F988B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISGROUPVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x5F9B260)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISREADY_OFFSET UNITYSDK_OFFSET(0x5F981F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISVALID_OFFSET UNITYSDK_OFFSET(0x5F98010)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_REMOVEREADYREQUIRE_OFFSET UNITYSDK_OFFSET(0x5F98640)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_REMOVE_OFFSET UNITYSDK_OFFSET(0x5F97E40)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x5F9B560)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENTINSTANT_OFFSET UNITYSDK_OFFSET(0x5F9B330)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENT_1_OFFSET UNITYSDK_OFFSET(0x5F9A630)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x5F99A90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETASSOCIATEDENTITY_OFFSET UNITYSDK_OFFSET(0x5F99370)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETBASICDATA_OFFSET UNITYSDK_OFFSET(0x5F9BD90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETGROUPANDMEMID_OFFSET UNITYSDK_OFFSET(0x5F98ED0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETGROUPID_OFFSET UNITYSDK_OFFSET(0x5F990E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETMEMBERID_OFFSET UNITYSDK_OFFSET(0x5F991C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETOWNERGROUP_OFFSET UNITYSDK_OFFSET(0x5F9AFD0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTASSOCIATEDENTITY_OFFSET UNITYSDK_OFFSET(0x5F9BB70)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTBYENTITY_OFFSET UNITYSDK_OFFSET(0x5F9BC80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x5F99410)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0x5F9BAD0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVOCONFIGPOSROT_OFFSET UNITYSDK_OFFSET(0x5F99790)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectExtension_TypeDefinitionIndex = 45027;

	class ViewObjectExtension : public ::System::Object
	{
	public:
		static ::System::Boolean HasAny(::Foundation::ViewObject::EViewObjectComponentFlags flag, ::Foundation::ViewObject::EViewObjectComponentFlags flagCheck)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::EViewObjectComponentFlags, ::Foundation::ViewObject::EViewObjectComponentFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASANY_OFFSET))(flag, flagCheck);
		}

		static ::System::Boolean HasAll(::Foundation::ViewObject::EViewObjectComponentFlags flag, ::Foundation::ViewObject::EViewObjectComponentFlags flagCheck)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::EViewObjectComponentFlags, ::Foundation::ViewObject::EViewObjectComponentFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASALL_OFFSET))(flag, flagCheck);
		}

		static ::System::Void Add(::Foundation::ViewObject::EViewObjectComponentFlags& flag, ::Foundation::ViewObject::EViewObjectComponentFlags rFlag)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::EViewObjectComponentFlags&, ::Foundation::ViewObject::EViewObjectComponentFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ADD_OFFSET))(flag, rFlag);
		}

		static ::System::Void Remove(::Foundation::ViewObject::EViewObjectComponentFlags& flag, ::Foundation::ViewObject::EViewObjectComponentFlags rFlag)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::EViewObjectComponentFlags&, ::Foundation::ViewObject::EViewObjectComponentFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_REMOVE_OFFSET))(flag, rFlag);
		}

		static ::System::Void Enable(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ENABLE_OFFSET))(handle, value);
		}

		static ::System::Boolean IsValid(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISVALID_OFFSET))(handle);
		}

		static ::System::Boolean IsReady(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISREADY_OFFSET))(handle);
		}

		static ::System::Void AddReadyRequire(::Foundation::ViewObject::ViewObjectHandle handle, ::Foundation::ViewObject::EViewObjectReadyFlags addFlag)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ADDREADYREQUIRE_OFFSET))(handle, addFlag);
		}

		static ::System::Void RemoveReadyRequire(::Foundation::ViewObject::ViewObjectHandle handle, ::Foundation::ViewObject::EViewObjectReadyFlags removeFlag)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_REMOVEREADYREQUIRE_OFFSET))(handle, removeFlag);
		}

		static ::System::Boolean HashReadyFlags(::Foundation::ViewObject::ViewObjectHandle handle, ::Foundation::ViewObject::EViewObjectReadyFlags target)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASHREADYFLAGS_OFFSET))(handle, target);
		}

		static ::Foundation::ViewObject::ViewObject* GetViewObject(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::Foundation::ViewObject::ViewObject*(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETVIEWOBJECT_OFFSET))(handle);
		}

		static ::System::UInt32 GetRuntimeID(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::UInt32(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETRUNTIMEID_OFFSET))(handle);
		}

		static ::System::Boolean TryGetGroupAndMemID(::Foundation::ViewObject::ViewObjectHandle handle, ::System::UInt32& groupID, ::System::UInt32& memberID)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETGROUPANDMEMID_OFFSET))(handle, groupID, memberID);
		}

		static ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetGroupAndMemID(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETGROUPANDMEMID_OFFSET))(handle);
		}

		static ::System::Boolean TryGetGroupID(::Foundation::ViewObject::ViewObjectHandle handle, ::System::UInt32& groupID)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETGROUPID_OFFSET))(handle, groupID);
		}

		static ::System::UInt32 TryGetMemberId(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::UInt32(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETMEMBERID_OFFSET))(handle);
		}

		static ::MoleMole::EntityHandle FindAssociatedEntity(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_FINDASSOCIATEDENTITY_OFFSET))(handle);
		}

		static ::System::Boolean TryGetAssociatedEntity(::Foundation::ViewObject::ViewObjectHandle handle, ::MoleMole::EntityHandle& entity)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETASSOCIATEDENTITY_OFFSET))(handle, entity);
		}

		static ::System::Boolean TryGetViewObjectEntityPosRot(::Foundation::ViewObject::ViewObjectHandle handle, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& rotation)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTENTITYPOSROT_OFFSET))(handle, position, rotation);
		}

		static ::System::Boolean TryGetVOConfigPosRot(::Foundation::ViewObject::ViewObjectHandle handle, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& rotation)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVOCONFIGPOSROT_OFFSET))(handle, position, rotation);
		}

		static ::Foundation::ViewObject::EViewObjectMetaFlags GetMetaFlags(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::Foundation::ViewObject::EViewObjectMetaFlags(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETMETAFLAGS_OFFSET))(handle);
		}

		static ::System::Void SendEvent(::Foundation::ViewObject::ViewObjectHandle handle, ::Enum_3_BAE21DD4C85AF7B9 eventName, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::Enum_3_BAE21DD4C85AF7B9, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENT_OFFSET))(handle, eventName, suiteInfo);
		}

		static ::System::Void SendEvent_1(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Int32 graphID, ::Enum_3_BAE21DD4C85AF7B9 eventName, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::Enum_3_BAE21DD4C85AF7B9, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENT_1_OFFSET))(handle, graphID, eventName, suiteInfo);
		}

		static ::System::Boolean TryGetOwnerGroup(::Foundation::ViewObject::ViewObjectHandle inHandle, ::Foundation::ViewObject::ViewObjectHandle& handle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETOWNERGROUP_OFFSET))(inHandle, handle);
		}

		static ::System::Boolean IsGroupViewObject(::Foundation::ViewObject::ViewObjectHandle handle, ::Class_2_74BD0166ECF298D9*& groupComponent)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Class_2_74BD0166ECF298D9*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISGROUPVIEWOBJECT_OFFSET))(handle, groupComponent);
		}

		static ::System::Void SendEventInstant(::Foundation::ViewObject::ViewObjectHandle handle, ::Enum_3_BAE21DD4C85AF7B9 eventName, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::Enum_3_BAE21DD4C85AF7B9, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENTINSTANT_OFFSET))(handle, eventName, suiteInfo);
		}

		static ::System::Void SendCustomEvent(::Foundation::ViewObject::ViewObjectHandle handle, ::System::String* eventName, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>* list, ::Struct_2_C3F14E7E9EA24BAC filter, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_E33A8767CD3B76C6>*, ::Struct_2_C3F14E7E9EA24BAC, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDCUSTOMEVENT_OFFSET))(handle, eventName, list, filter, suiteInfo);
		}

		static ::System::Collections::Generic::List_1<::Class_1_3BC6FFBFA6077E08*>* GetDFScriptsBySuiteInfo(::Foundation::ViewObject::ViewObjectHandle viewObject, ::Foundation::ViewObject::SuiteInfo suiteInfo, ::System::Boolean includePendingSuiteScripts, ::System::Collections::Generic::List_1<::Class_1_3BC6FFBFA6077E08*>* result)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3BC6FFBFA6077E08*>*(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::SuiteInfo, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_3BC6FFBFA6077E08*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETDFSCRIPTSBYSUITEINFO_OFFSET))(viewObject, suiteInfo, includePendingSuiteScripts, result);
		}

		static ::Class_1_3BC6FFBFA6077E08* GetDFScriptByGraphID(::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::Int32 graphID, ::System::Boolean includePendingSuiteScripts)
		{
			return ((::Class_1_3BC6FFBFA6077E08*(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETDFSCRIPTBYGRAPHID_OFFSET))(viewObject, graphID, includePendingSuiteScripts);
		}

		static ::Foundation::ViewObject::SuiteInfo GetCurrentSuite(::Foundation::ViewObject::ViewObjectHandle viewObject)
		{
			return ((::Foundation::ViewObject::SuiteInfo(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCURRENTSUITE_OFFSET))(viewObject);
		}

		static ::Foundation::ViewObject::SuiteInfo GetCurrentSuite_1(::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::Boolean& isGroup)
		{
			return ((::Foundation::ViewObject::SuiteInfo(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCURRENTSUITE_1_OFFSET))(viewObject, isGroup);
		}

		static ::MoleMole::EntityHandle GetEntityHandle(::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETENTITYHANDLE_OFFSET))(viewObjectHandle);
		}

		static ::Foundation::ViewObject::ViewObjectHandle GetViewObjectHandle(::Foundation::ViewObject::GroupMemberIdentifier identifier)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETVIEWOBJECTHANDLE_OFFSET))(identifier);
		}

		static ::System::Boolean TryGetViewObjectHandle(::Foundation::ViewObject::GroupMemberIdentifier identifier, ::Foundation::ViewObject::ViewObjectHandle& viewObjectHandle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::GroupMemberIdentifier, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTHANDLE_OFFSET))(identifier, viewObjectHandle);
		}

		static ::System::Boolean TryGetViewObjectAssociatedEntity(::Foundation::ViewObject::GroupMemberIdentifier identifier, ::MoleMole::EntityHandle& entityHandle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::GroupMemberIdentifier, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTASSOCIATEDENTITY_OFFSET))(identifier, entityHandle);
		}

		static ::Foundation::ViewObject::ViewObjectHandle TryGetViewObjectByEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTBYENTITY_OFFSET))(entityHandle);
		}

		static ::System::Boolean TryGetBasicData(::Foundation::ViewObject::ViewObjectHandle viewObjectHandle, ::Class_2_BE71B422DBACB61A*& basicData)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Class_2_BE71B422DBACB61A*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETBASICDATA_OFFSET))(viewObjectHandle, basicData);
		}
	};
}
