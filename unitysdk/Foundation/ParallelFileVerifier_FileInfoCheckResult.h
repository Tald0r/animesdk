#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }
namespace Foundation { class ParallelFileVerifier_FileResult; }
namespace System { class String; }

#define FOUNDATION_PARALLELFILEVERIFIER_FILEINFOCHECKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x6C43530)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_FileInfoCheckResult_TypeDefinitionIndex = 56573;

	class ParallelFileVerifier_FileInfoCheckResult : public ::System::Object
	{
	public:
		::Foundation::ParallelFileVerifier_FileResult* PersistNew; // 0x10
		::Foundation::ExceptionInfo* errorInfo; // 0x18
		::Foundation::ParallelFileVerifier_FileResult* Streaming; // 0x20
		::System::String* displayMsg; // 0x28
		::Foundation::ParallelFileVerifier_FileResult* Persist; // 0x30
		::Struct_2_DAA84C1CDD754F37 filePickInfo; // 0x38
		::System::String* errMsg; // 0x80
		::System::Boolean verifyPass; // 0x88
		::System::Boolean fileExistInBuildIn; // 0x89

		::System::Void _ctor(::Struct_2_DAA84C1CDD754F37 filePickInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_FILEINFOCHECKRESULT__CTOR_OFFSET))(this, filePickInfo);
		}
	};
}
