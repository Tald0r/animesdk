#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_AUTOPROFILERSAMPLE_BEGIN_OFFSET UNITYSDK_OFFSET(0x8839E0)
#define FOUNDATION_AUTOPROFILERSAMPLE_CREATE_OFFSET UNITYSDK_OFFSET(0x193F1C70)
#define FOUNDATION_AUTOPROFILERSAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x883A50)

namespace Foundation
{
	inline static constexpr unsigned int AutoProfilerSample_TypeDefinitionIndex = 8195;

	struct alignas(1) AutoProfilerSample
	{
		::System::Boolean sampling; // 0x10

		::System::Void Begin(::System::String* profilerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOPROFILERSAMPLE_BEGIN_OFFSET))(this, profilerName);
		}

		/*
		static ::Foundation::EmptyAutoProfilerSample Create(::System::String* ProfilerName)
		{
			return ((::Foundation::EmptyAutoProfilerSample(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOPROFILERSAMPLE_CREATE_OFFSET))(ProfilerName);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOPROFILERSAMPLE_DISPOSE_OFFSET))(this);
		}
	};
}
