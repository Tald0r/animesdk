#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GpuBoidSettings;
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define GPUBOIDMANAGER_BOIDCALCNEWPOSITIONSCOMPUTE_OFFSET UNITYSDK_OFFSET(0x192392A0)
#define GPUBOIDMANAGER_BOIDINITPOSITIONSCOMPUTE_OFFSET UNITYSDK_OFFSET(0x19239070)
#define GPUBOIDMANAGER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x19238C70)
#define GPUBOIDMANAGER_CREATEBOIDBUFFER_OFFSET UNITYSDK_OFFSET(0x19238930)
#define GPUBOIDMANAGER_CREATEDEBUGGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x19238DF0)
#define GPUBOIDMANAGER_DRAWBOIDBUFFER_OFFSET UNITYSDK_OFFSET(0x19239AF0)
#define GPUBOIDMANAGER_GET_BOUNDSFORCULLING_OFFSET UNITYSDK_OFFSET(0x19238DB0)
#define GPUBOIDMANAGER_GET_ISVISIABLE_OFFSET UNITYSDK_OFFSET(0x19239A20)
#define GPUBOIDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x192383B0)
#define GPUBOIDMANAGER_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19238F10)
#define GPUBOIDMANAGER_ISVALID_OFFSET UNITYSDK_OFFSET(0x19239A40)
#define GPUBOIDMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19238A90)
#define GPUBOIDMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x192380E0)
#define GPUBOIDMANAGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x19238D10)
#define GPUBOIDMANAGER_SET_BOUNDSFORCULLING_OFFSET UNITYSDK_OFFSET(0x19238DD0)
#define GPUBOIDMANAGER_SET_ISVISIABLE_OFFSET UNITYSDK_OFFSET(0x19239A30)
#define GPUBOIDMANAGER_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x19238410)
#define GPUBOIDMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19238D60)
#define GPUBOIDMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19239DB0)
#define GPUBOIDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19239D10)

inline static constexpr unsigned int GpuBoidManager_TypeDefinitionIndex = 28082;

class GpuBoidManager : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__HardBounds()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6910);
	}
	static ::System::Int32* StaticGet__SqrPerceptionRange()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6914);
	}
	static ::System::Int32* StaticGet__SoftAndHardBoundsStrength()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6918);
	}
	static ::System::Int32* StaticGet__TestBoidConstant()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x691C);
	}
	static ::System::Int32* StaticGet__MaxSpeed()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6920);
	}
	static ::System::Int32* StaticGet__RevertSpeed()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6924);
	}
	static ::System::Int32* StaticGet__ZConstraint()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6928);
	}
	static ::System::Int32* StaticGet__SeparationDistanceSq()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x692C);
	}
	static ::System::Int32* StaticGet__Boids()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6930);
	}
	static ::System::Int32* StaticGet__SeparationStrength()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6934);
	}
	static ::System::Int32* StaticGet__BoidInstanceBuffer()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6938);
	}
	static ::System::Int32* StaticGet__LeaderInfluenceDistSq()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x693C);
	}
	static ::System::Int32* StaticGet__LeaderPosAndStrength()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6940);
	}
	static ::System::Int32* StaticGet__MaxAccel()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6944);
	}
	static ::System::Int32* StaticGet__BoidRadiusAndSq()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6948);
	}
	static ::System::Int32* StaticGet__DeltaTime()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x694C);
	}
	static ::System::Boolean* StaticGet_s_DebugBoidValid()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6950);
	}
	static ::System::Int32* StaticGet__NumBoids()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6954);
	}
	static ::System::Int32* StaticGet__AlignmentStrength()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6958);
	}
	static ::System::Int32* StaticGet__TestBoidConstant2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x695C);
	}
	static ::System::Int32* StaticGet__InstanceMeshScale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6960);
	}
	static ::System::Int32* StaticGet__CohesionStrength()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6964);
	}
	static ::System::Int32* StaticGet__FlockObjectToWorld()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x6968);
	}
	static ::System::Int32* StaticGet__InvMass()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GpuBoidManager_TypeDefinitionIndex)->GetStaticField(0x696C);
	}
	// static const ::System::Int32 BLOCK_SIZE_X = 0x100; // 0x0
	// static const ::System::Int32 MAX_INSTANCE_COUNT = 0x100; // 0x0
	::System::Int32 instanceCount; // 0x18
	::UnityEngine::Mesh* mesh; // 0x20
	::UnityEngine::Material* material; // 0x28
	::System::Single boidMeshScale; // 0x30
	::System::Single boidRadius; // 0x34
	::UnityEngine::Vector3 hardBounds; // 0x38
	::System::Single boidPerceptionRange; // 0x44
	::System::Single separation; // 0x48
	::System::Single separationDistance; // 0x4C
	::System::Single alignment; // 0x50
	::System::Single cohesion; // 0x54
	::System::Single maxAccel; // 0x58
	::System::Single maxSpeed; // 0x5C
	::System::Single mass; // 0x60
	::System::Single softBoundsStrength; // 0x64
	::System::Single hardBoundsStrength; // 0x68
	::System::Single ZConstraint; // 0x6C
	::System::Boolean revertSpeed; // 0x70
	::System::Single PoiStrength; // 0x74
	::System::Single PoiInfluenceDistance; // 0x78
	::UnityEngine::Transform* PoiTransform; // 0x80
	::System::Single PoiMaxRadius; // 0x88
	::System::Single PoiMoveSpeed; // 0x8C
	::System::Single PoiZConstraint; // 0x90
	::GpuBoidSettings* overrideSettings; // 0x98
	::UnityEngine::Bounds infinityBounds; // 0xA0
	::UnityEngine::Bounds _boundsForCulling_k__BackingField; // 0xB8
	::UnityEngine::GameObject* debugGameObject; // 0xD0
	::UnityEngine::ComputeBuffer* boidBuffer; // 0xD8
	::System::Boolean resetInNextUpdate; // 0xE0
	::System::Boolean _IsVisiable_k__BackingField; // 0xE1
	::UnityEngine::MaterialPropertyBlock* m_LocalMpb; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPUBOIDMANAGER__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Bounds get_boundsForCulling()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_GET_BOUNDSFORCULLING_OFFSET))(this);
	}

	::System::Void set_boundsForCulling(::UnityEngine::Bounds value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_SET_BOUNDSFORCULLING_OFFSET))(this, value);
	}

	::System::Void UpdateBounds()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_UPDATEBOUNDS_OFFSET))(this);
	}

	::UnityEngine::GameObject* CreateDebugGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_CREATEDEBUGGAMEOBJECT_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_INIT_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_CLEANUP_OFFSET))(this);
	}

	::System::Void CreateBoidBuffer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_CREATEBOIDBUFFER_OFFSET))(this);
	}

	::System::Void BoidInitPositionsCompute(::UnityEngine::ComputeShader* gpuBoidCS, ::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_BOIDINITPOSITIONSCOMPUTE_OFFSET))(this, gpuBoidCS, cmd);
	}

	::System::Void BoidCalcNewPositionsCompute(::UnityEngine::ComputeShader* gpuBoidCS, ::UnityEngine::Rendering::CommandBuffer* cmdWrapper)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_BOIDCALCNEWPOSITIONSCOMPUTE_OFFSET))(this, gpuBoidCS, cmdWrapper);
	}

	::System::Boolean get_IsVisiable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_GET_ISVISIABLE_OFFSET))(this);
	}

	::System::Void set_IsVisiable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_SET_ISVISIABLE_OFFSET))(this, value);
	}

	::System::Boolean IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_ISACTIVE_OFFSET))(this);
	}

	::System::Boolean IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_ISVALID_OFFSET))(this);
	}

	::System::Void DrawBoidBuffer(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + GPUBOIDMANAGER_DRAWBOIDBUFFER_OFFSET))(this, context, cmd);
	}
};
