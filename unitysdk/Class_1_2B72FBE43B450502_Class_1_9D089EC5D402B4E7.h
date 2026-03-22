#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }

#define CLASS_1_2B72FBE43B450502_CLASS_1_9D089EC5D402B4E7_METHOD_1_4B3C89E34B373969_OFFSET UNITYSDK_OFFSET(0xBC4F0C0)
#define CLASS_1_2B72FBE43B450502_CLASS_1_9D089EC5D402B4E7__CTOR_OFFSET UNITYSDK_OFFSET(0xBC4F0B0)

inline static constexpr unsigned int Class_1_2B72FBE43B450502_Class_1_9D089EC5D402B4E7_TypeDefinitionIndex = 42883;

class Class_1_2B72FBE43B450502_Class_1_9D089EC5D402B4E7 : public ::System::Object
{
public:
	::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_9D089EC5D402B4E7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4B3C89E34B373969(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_9D089EC5D402B4E7_METHOD_1_4B3C89E34B373969_OFFSET))(this, a1);
	}
};
