#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x8628E90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdAnimationConstants_TypeDefinitionIndex = 79871;

	class CrowdAnimationConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34DD0);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34DD8);
		}
		static ::System::String** StaticGet_COMPUTE_FIX_WEIGHTS_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34DE0);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34DE8);
		}
		static ::System::String** StaticGet_COMPUTE_SKINNED_MESH_ANIMATE_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34DF0);
		}
		static ::System::String** StaticGet_COMPUTE_ASYNC_BONE_UPDATE_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34DF8);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34E00);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34E08);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_LERPED_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34E10);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_BONES_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34E18);
		}
		static ::System::String** StaticGet_COMPUTE_CROWD_ANIMATOR_UBER_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34E20);
		}
		static ::System::String** StaticGet_COMPUTE_ANIMATE_BONES_KERNEL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0x34E28);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD100);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_INT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD104);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD108);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_BOOL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD10C);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_MATRIX4X4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD110);
		}
		static ::System::Single* StaticGet_COMPUTE_SHADER_THREAD_COUNT_2D()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD114);
		}
		static ::System::Int32* StaticGet_STRIDE_SIZE_FLOAT4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CrowdAnimationConstants_TypeDefinitionIndex)->GetStaticField(0xD118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDANIMATIONCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
