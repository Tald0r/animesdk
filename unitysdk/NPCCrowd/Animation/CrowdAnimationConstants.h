#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x7646A60)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdAnimationConstants_TypeDefinitionIndex = 37987;

	class CrowdAnimationConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DA0);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DA8);
		}
		static ::System::String** StaticGet_COMPUTE_FIX_WEIGHTS_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DB0);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DB8);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DC0);
		}
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DC8);
		}
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DD0);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DD8);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DE0);
		}
		static ::System::String** StaticGet_COMPUTE_SKINNED_MESH_ANIMATE_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DE8);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DF0);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x32DF8);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_INT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xC5A0);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xC5A4);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xC5A8);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT_2D()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xC5AC);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_BOOL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xC5B0);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_MATRIX4X4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xC5B4);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xC5B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
