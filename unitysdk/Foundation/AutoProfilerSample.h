#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_AUTOPROFILERSAMPLE_BEGIN_OFFSET UNITYSDK_OFFSET(0x8B7CB0)
#define FOUNDATION_AUTOPROFILERSAMPLE_CREATE_OFFSET UNITYSDK_OFFSET(0x19973D70)
#define FOUNDATION_AUTOPROFILERSAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B7D20)

namespace Foundation
{
	inline static constexpr unsigned int AutoProfilerSample_TypeDefinitionIndex = 8172;

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
