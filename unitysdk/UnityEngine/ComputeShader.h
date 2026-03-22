#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_COMPUTESHADER_DISPATCH_OFFSET UNITYSDK_OFFSET(0x19D12290)
#define UNITYENGINE_COMPUTESHADER_FINDKERNEL_OFFSET UNITYSDK_OFFSET(0x19D121C0)
#define UNITYENGINE_COMPUTESHADER_GETKERNELTHREADGROUPSIZES_OFFSET UNITYSDK_OFFSET(0x19D12280)
#define UNITYENGINE_COMPUTESHADER_HASKERNEL_OFFSET UNITYSDK_OFFSET(0x19D121D0)
#define UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x19D12270)
#define UNITYENGINE_COMPUTESHADER_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x19D12240)
#define UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET UNITYSDK_OFFSET(0x19D122C0)
#define UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x19D121E0)
#define UNITYENGINE_COMPUTESHADER_SETINTARRAY_OFFSET UNITYSDK_OFFSET(0x19D12250)
#define UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET UNITYSDK_OFFSET(0x19D122D0)
#define UNITYENGINE_COMPUTESHADER_SETINT_OFFSET UNITYSDK_OFFSET(0x19D121F0)
#define UNITYENGINE_COMPUTESHADER_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x19D12230)
#define UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x19D12220)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x19D122E0)
#define UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x19D12260)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x19D12210)
#define UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x19D12200)
#define UNITYENGINE_COMPUTESHADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D122A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeShader_TypeDefinitionIndex = 5383;

	class ComputeShader : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER__CTOR_OFFSET))(this);
		}

		::System::Int32 FindKernel(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_FINDKERNEL_OFFSET))(this, name);
		}

		::System::Boolean HasKernel(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_HASKERNEL_OFFSET))(this, name);
		}

		::System::Void SetFloat(::System::Int32 nameID, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOAT_OFFSET))(this, nameID, val);
		}

		::System::Void SetInt(::System::Int32 nameID, ::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINT_OFFSET))(this, nameID, val);
		}

		::System::Void SetVector(::System::Int32 nameID, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_OFFSET))(this, nameID, val);
		}

		::System::Void SetMatrix(::System::Int32 nameID, ::UnityEngine::Matrix4x4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIX_OFFSET))(this, nameID, val);
		}

		::System::Void SetFloatArray(::System::Int32 nameID, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOATARRAY_OFFSET))(this, nameID, values);
		}

		::System::Void SetIntArray(::System::Int32 nameID, ::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINTARRAY_OFFSET))(this, nameID, values);
		}

		::System::Void SetTexture(::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::Texture* texture, ::System::Int32 mipLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_OFFSET))(this, kernelIndex, nameID, texture, mipLevel);
		}

		::System::Void SetBuffer(::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::ComputeBuffer* buffer, ::System::Boolean separateParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETBUFFER_OFFSET))(this, kernelIndex, nameID, buffer, separateParam);
		}

		::System::Void GetKernelThreadGroupSizes(::System::Int32 kernelIndex, ::System::UInt32& x, ::System::UInt32& y, ::System::UInt32& z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_GETKERNELTHREADGROUPSIZES_OFFSET))(this, kernelIndex, x, y, z);
		}

		::System::Void Dispatch(::System::Int32 kernelIndex, ::System::Int32 threadGroupsX, ::System::Int32 threadGroupsY, ::System::Int32 threadGroupsZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_DISPATCH_OFFSET))(this, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
		}

		::System::Void SetFloats(::System::Int32 nameID, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETFLOATS_OFFSET))(this, nameID, values);
		}

		::System::Void SetInts(::System::Int32 nameID, ::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETINTS_OFFSET))(this, nameID, values);
		}

		::System::Void SetTexture_1(::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::Texture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETTEXTURE_1_OFFSET))(this, kernelIndex, nameID, texture);
		}

		::System::Void SetVector_Injected(::System::Int32 nameID, ::UnityEngine::Vector4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETVECTOR_INJECTED_OFFSET))(this, nameID, val);
		}

		::System::Void SetMatrix_Injected(::System::Int32 nameID, ::UnityEngine::Matrix4x4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADER_SETMATRIX_INJECTED_OFFSET))(this, nameID, val);
		}
	};
}
