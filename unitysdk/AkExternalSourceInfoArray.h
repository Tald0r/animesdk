#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkExternalSourceInfo;

#define AKEXTERNALSOURCEINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1B112C30)
#define AKEXTERNALSOURCEINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1B112C00)
#define AKEXTERNALSOURCEINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1B112B00)
#define AKEXTERNALSOURCEINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1B112A80)
#define AKEXTERNALSOURCEINFOARRAY_RELEASEALLOCATEDMEMORYFROMREFERENCEATINTPTR_OFFSET UNITYSDK_OFFSET(0x1B112B80)
#define AKEXTERNALSOURCEINFOARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B112A60)
#define AKEXTERNALSOURCEINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B112A50)

inline static constexpr unsigned int AkExternalSourceInfoArray_TypeDefinitionIndex = 30057;

class AkExternalSourceInfoArray : public ::AkBaseArray_1<::AkExternalSourceInfo*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY__CTOR_1_OFFSET))(this);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, address);
	}

	::System::Void ReleaseAllocatedMemoryFromReferenceAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_RELEASEALLOCATEDMEMORYFROMREFERENCEATINTPTR_OFFSET))(this, address);
	}

	::AkExternalSourceInfo* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkExternalSourceInfo*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkExternalSourceInfo* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkExternalSourceInfo*))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}
};
