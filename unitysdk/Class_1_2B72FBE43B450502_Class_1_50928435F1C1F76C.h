#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }

#define CLASS_1_2B72FBE43B450502_CLASS_1_50928435F1C1F76C_METHOD_1_DB04ABFA7C510F9B_OFFSET UNITYSDK_OFFSET(0x83CE730)
#define CLASS_1_2B72FBE43B450502_CLASS_1_50928435F1C1F76C__CTOR_OFFSET UNITYSDK_OFFSET(0x83CE720)

inline static constexpr unsigned int Class_1_2B72FBE43B450502_Class_1_50928435F1C1F76C_TypeDefinitionIndex = 70646;

class Class_1_2B72FBE43B450502_Class_1_50928435F1C1F76C : public ::System::Object
{
public:
	::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_50928435F1C1F76C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DB04ABFA7C510F9B(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_50928435F1C1F76C_METHOD_1_DB04ABFA7C510F9B_OFFSET))(this, a1);
	}
};
