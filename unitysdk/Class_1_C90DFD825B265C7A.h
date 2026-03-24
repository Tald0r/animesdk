#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_C90DFD825B265C7A_METHOD_1_6704FAB2B0E9B556_OFFSET UNITYSDK_OFFSET(0xFAF19E0)
#define CLASS_1_C90DFD825B265C7A__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF1A50)

inline static constexpr unsigned int Class_1_C90DFD825B265C7A_TypeDefinitionIndex = 63098;

class Class_1_C90DFD825B265C7A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C90DFD825B265C7A__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6704FAB2B0E9B556(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C90DFD825B265C7A_METHOD_1_6704FAB2B0E9B556_OFFSET))(this, a1);
	}
};
