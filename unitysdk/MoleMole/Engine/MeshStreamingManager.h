#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_8.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CD8BF1A5728E705;
class Class_1_728ECF47979928D7;
namespace MoleMole::Engine { class StreamingGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FORCEUPDATESTATES_OFFSET UNITYSDK_OFFSET(0xA5DA4A0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0xA5DA660)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GETSTATS_OFFSET UNITYSDK_OFFSET(0xA5DC320)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ISMESHSTREAMINGMANAGERRUNNING_OFFSET UNITYSDK_OFFSET(0xA5DA340)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA5DB450)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_47F418337C69BED0_OFFSET UNITYSDK_OFFSET(0xA5DB180)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_494F27C12C9A17A9_OFFSET UNITYSDK_OFFSET(0xA5DCB10)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_52D4C384073A31F5_OFFSET UNITYSDK_OFFSET(0xA5DC200)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_5E0DBF36D6013B7C_OFFSET UNITYSDK_OFFSET(0xA5DB680)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_7DE92565C4B260BE_1_OFFSET UNITYSDK_OFFSET(0xA5DCCE0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_7DE92565C4B260BE_OFFSET UNITYSDK_OFFSET(0xA5DC410)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_D754D5F3490FC4F3_OFFSET UNITYSDK_OFFSET(0xA5DD0B0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xA5DBB80)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA5DC0E0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_REGISTERINITIALLOADDONEACTION_OFFSET UNITYSDK_OFFSET(0xA5DBF70)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET UNITYSDK_OFFSET(0xA5DBDF0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_START_OFFSET UNITYSDK_OFFSET(0xA5DA730)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_TESTUPDATE_OFFSET UNITYSDK_OFFSET(0xA5DC150)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_TRYCLEANUPLASTINSTANCE_OFFSET UNITYSDK_OFFSET(0xA5DBA20)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5DC3E0)
#define MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5DC3C0)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int MeshStreamingManager_TypeDefinitionIndex = 55142;

	class MeshStreamingManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Engine::MeshStreamingManager** StaticGet_Field_5_12()
		{
			return (::MoleMole::Engine::MeshStreamingManager**)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0x36460);
		}
		static ::System::Single* StaticGet_MaxLODStateQueryFrameDiff()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8B0);
		}
		static ::System::Single* StaticGet_MaxLODStateQuerySquareDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8B4);
		}
		static ::System::Int32* StaticGet_LastLODStateQueryFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8B8);
		}
		static ::System::Single* StaticGet_StableDistanceThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8BC);
		}
		static ::System::Int32* StaticGet_TestState()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8C0);
		}
		static ::System::Int32* StaticGet_MaxGroupUpdatePerFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8C4);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MeshStreamingManager_TypeDefinitionIndex)->GetStaticField(0xD8C8);
		}
		// static const ::System::String* MeshStreamingBuildStatePath; // 0x0
		// static const ::System::String* NameMeshStreamingRoot; // 0x0
		// static const ::System::Int32 NotLoading = 0xF8000000; // 0x0
		// static const ::System::Int32 reallyUnloadLimit = 0x1E; // 0x0
		::Il2CppArray<::System::String*>* StreamingMeshPaths; // 0x18
		::Il2CppArray<::MoleMole::Engine::StreamingGroup*>* StreamingGroups; // 0x20
		::System::Boolean Field_5_13; // 0x28
		::System::Boolean Field_5_14; // 0x29
		::System::Int32 Field_5_15; // 0x2C
		::Il2CppArray<::Class_1_728ECF47979928D7*>* Field_5_16; // 0x30
		::Il2CppArray<::Class_1_1CD8BF1A5728E705*>* Field_5_17; // 0x38
		::Il2CppArray<::System::Int32>* Field_5_18; // 0x40
		::Il2CppArray<::System::Byte>* Field_5_19; // 0x48
		::System::Runtime::InteropServices::GCHandle Field_5_20; // 0x50
		::System::Runtime::InteropServices::GCHandle Field_5_21; // 0x54
		::System::IntPtr Field_5_22; // 0x58
		::System::IntPtr Field_5_23; // 0x60
		::UnityEngine::Vector3 Field_5_24; // 0x68
		::System::Int32 Field_5_25; // 0x74
		::System::Int32 Field_5_26; // 0x78
		::System::Action* Field_5_27; // 0x80
		::System::Int32 Field_5_28; // 0x88
		::System::Int32 Field_5_29; // 0x8C
		::System::Boolean Field_5_30; // 0x90
		::System::Int32 Field_5_32; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsMeshStreamingManagerRunning()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ISMESHSTREAMINGMANAGERRUNNING_OFFSET))();
		}

		static ::System::Void ForceUpdateStates()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FORCEUPDATESTATES_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_START_OFFSET))(this);
		}

		static ::System::Void TryCleanupLastInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_TRYCLEANUPLASTINSTANCE_OFFSET))();
		}

		static ::System::Void RegisterOrRunAfterLoadAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET))(a1);
		}

		::System::Void RegisterInitialLoadDoneAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_REGISTERINITIALLOADDONEACTION_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void TestUpdate(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_TESTUPDATE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::Struct_2_4C8453486C91E3A1_8 GetStats()
		{
			return ((::Struct_2_4C8453486C91E3A1_8(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_GETSTATS_OFFSET))(this);
		}

		::System::Void Method_5_7DE92565C4B260BE(::Class_1_1CD8BF1A5728E705* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CD8BF1A5728E705*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_7DE92565C4B260BE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_5E0DBF36D6013B7C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_5E0DBF36D6013B7C_OFFSET))(this, a1);
		}

		::System::Void Method_5_D754D5F3490FC4F3(::Class_1_1CD8BF1A5728E705* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CD8BF1A5728E705*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_D754D5F3490FC4F3_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* Method_5_47F418337C69BED0(::UnityEngine::Vector3& a1)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_47F418337C69BED0_OFFSET))(this, a1);
		}

		::System::Void Method_5_494F27C12C9A17A9(::Class_1_728ECF47979928D7* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_728ECF47979928D7*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_494F27C12C9A17A9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_52D4C384073A31F5(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_52D4C384073A31F5_OFFSET))(this, a1);
		}

		::System::Void Method_5_7DE92565C4B260BE_1(::Class_1_1CD8BF1A5728E705* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CD8BF1A5728E705*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_7DE92565C4B260BE_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E693A0026D178D8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_MESHSTREAMINGMANAGER_METHOD_5_E693A0026D178D8E_OFFSET))(this);
		}
	};
}
