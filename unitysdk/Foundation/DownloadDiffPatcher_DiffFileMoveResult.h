#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }
namespace System { class String; }

#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILEMOVERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xAC790E0)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_DiffFileMoveResult_TypeDefinitionIndex = 61316;

	class DownloadDiffPatcher_DiffFileMoveResult : public ::System::Object
	{
	public:
		::Foundation::ExceptionInfo* exception; // 0x10
		::System::String* realSavePath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILEMOVERESULT__CTOR_OFFSET))(this);
		}
	};
}
