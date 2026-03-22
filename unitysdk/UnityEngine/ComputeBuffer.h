#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ComputeBufferMode.h"
#include "unitysdk/UnityEngine/ComputeBufferType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_COMPUTEBUFFER_COPYCOUNT_OFFSET UNITYSDK_OFFSET(0x197C6AD0)
#define UNITYENGINE_COMPUTEBUFFER_DESTROYBUFFER_OFFSET UNITYSDK_OFFSET(0x197C5BB0)
#define UNITYENGINE_COMPUTEBUFFER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x197C5AB0)
#define UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197C5B60)
#define UNITYENGINE_COMPUTEBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x197C59C0)
#define UNITYENGINE_COMPUTEBUFFER_GETBUFFERID_OFFSET UNITYSDK_OFFSET(0x197C6AE0)
#define UNITYENGINE_COMPUTEBUFFER_GETDATA_1_OFFSET UNITYSDK_OFFSET(0x197C6780)
#define UNITYENGINE_COMPUTEBUFFER_GETDATA_OFFSET UNITYSDK_OFFSET(0x197C6510)
#define UNITYENGINE_COMPUTEBUFFER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x197C5DC0)
#define UNITYENGINE_COMPUTEBUFFER_GET_STRIDE_OFFSET UNITYSDK_OFFSET(0x197C5DD0)
#define UNITYENGINE_COMPUTEBUFFER_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x197C5BC0)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALGETDATA_OFFSET UNITYSDK_OFFSET(0x197C6770)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALSETDATA_OFFSET UNITYSDK_OFFSET(0x197C6040)
#define UNITYENGINE_COMPUTEBUFFER_INTERNALSETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x197C6500)
#define UNITYENGINE_COMPUTEBUFFER_ISVALID_OFFSET UNITYSDK_OFFSET(0x197C5DB0)
#define UNITYENGINE_COMPUTEBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x197C5D60)
#define UNITYENGINE_COMPUTEBUFFER_SETCOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x197C6AC0)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_1_OFFSET UNITYSDK_OFFSET(0x197C6050)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_2_OFFSET UNITYSDK_OFFSET(0x197C61E0)
#define UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET UNITYSDK_OFFSET(0x197C5DE0)
#define UNITYENGINE_COMPUTEBUFFER_SETNAME_OFFSET UNITYSDK_OFFSET(0x197C6AB0)
#define UNITYENGINE_COMPUTEBUFFER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x197C6AA0)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197C5C20)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x197C5C40)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x197C5C60)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x197C5C00)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x197C5C90)
#define UNITYENGINE_COMPUTEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x197C5BD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBuffer_TypeDefinitionIndex = 5382;

	class ComputeBuffer : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::Int32 count, ::System::Int32 stride)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_OFFSET))(this, count, stride);
		}

		::System::Void _ctor_1(::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_1_OFFSET))(this, count, stride, type);
		}

		::System::Void _ctor_2(::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_2_OFFSET))(this, count, stride, type, usage);
		}

		::System::Void _ctor_3(::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_3_OFFSET))(this, count, stride, type, usage, format);
		}

		::System::Void _ctor_4(::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, ::System::Int32 stackDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_4_OFFSET))(this, count, stride, type, usage, stackDepth);
		}

		::System::Void _ctor_5(::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 stackDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER__CTOR_5_OFFSET))(this, count, stride, type, usage, format, stackDepth);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::IntPtr InitBuffer(::System::Int32 count, ::System::Int32 stride, ::UnityEngine::ComputeBufferType type, ::UnityEngine::ComputeBufferMode usage, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBufferType, ::UnityEngine::ComputeBufferMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INITBUFFER_OFFSET))(count, stride, type, usage, format);
		}

		static ::System::Void DestroyBuffer(::UnityEngine::ComputeBuffer* buf)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_DESTROYBUFFER_OFFSET))(buf);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_stride()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GET_STRIDE_OFFSET))(this);
		}

		::System::Void SetData(::System::Array* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_OFFSET))(this, data);
		}

		::System::Void SetData_1(::System::Array* data, ::System::Int32 elementSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_1_OFFSET))(this, data, elementSize);
		}

		::System::Void SetData_2(::System::Array* data, ::System::Int32 managedBufferStartIndex, ::System::Int32 computeBufferStartIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETDATA_2_OFFSET))(this, data, managedBufferStartIndex, computeBufferStartIndex, count);
		}

		::System::Void InternalSetNativeData(::System::IntPtr data, ::System::Int32 nativeBufferStartIndex, ::System::Int32 computeBufferStartIndex, ::System::Int32 count, ::System::Int32 elemSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALSETNATIVEDATA_OFFSET))(this, data, nativeBufferStartIndex, computeBufferStartIndex, count, elemSize);
		}

		::System::Void InternalSetData(::System::Array* data, ::System::Int32 managedBufferStartIndex, ::System::Int32 computeBufferStartIndex, ::System::Int32 count, ::System::Int32 elemSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALSETDATA_OFFSET))(this, data, managedBufferStartIndex, computeBufferStartIndex, count, elemSize);
		}

		::System::Void GetData(::System::Array* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GETDATA_OFFSET))(this, data);
		}

		::System::Void GetData_1(::System::Array* data, ::System::Int32 managedBufferStartIndex, ::System::Int32 computeBufferStartIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GETDATA_1_OFFSET))(this, data, managedBufferStartIndex, computeBufferStartIndex, count);
		}

		::System::Void InternalGetData(::System::Array* data, ::System::Int32 managedBufferStartIndex, ::System::Int32 computeBufferStartIndex, ::System::Int32 count, ::System::Int32 elemSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_INTERNALGETDATA_OFFSET))(this, data, managedBufferStartIndex, computeBufferStartIndex, count, elemSize);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SET_NAME_OFFSET))(this, value);
		}

		::System::Void SetName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETNAME_OFFSET))(this, name);
		}

		::System::Void SetCounterValue(::System::UInt32 counterValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_SETCOUNTERVALUE_OFFSET))(this, counterValue);
		}

		static ::System::Void CopyCount(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, ::System::Int32 dstOffsetBytes)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_COPYCOUNT_OFFSET))(src, dst, dstOffsetBytes);
		}

		::System::UInt64 GetBufferID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFER_GETBUFFERID_OFFSET))(this);
		}
	};
}
