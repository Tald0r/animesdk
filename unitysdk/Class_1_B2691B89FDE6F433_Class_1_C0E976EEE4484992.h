#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_B2691B89FDE6F433_CLASS_1_C0E976EEE4484992_METHOD_1_C30564EC1E0D47EF_OFFSET UNITYSDK_OFFSET(0x8A903C0)
#define CLASS_1_B2691B89FDE6F433_CLASS_1_C0E976EEE4484992__CTOR_OFFSET UNITYSDK_OFFSET(0x8A903B0)

inline static constexpr unsigned int Class_1_B2691B89FDE6F433_Class_1_C0E976EEE4484992_TypeDefinitionIndex = 45816;

class Class_1_B2691B89FDE6F433_Class_1_C0E976EEE4484992 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2691B89FDE6F433_CLASS_1_C0E976EEE4484992__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C30564EC1E0D47EF(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B2691B89FDE6F433_CLASS_1_C0E976EEE4484992_METHOD_1_C30564EC1E0D47EF_OFFSET))(this, a1);
	}
};
