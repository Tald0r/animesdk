#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigPointScoreCalculatePipe; }

#define CLASS_1_25C6437F29C011F8__CCTOR_OFFSET UNITYSDK_OFFSET(0x82C8090)

inline static constexpr unsigned int Class_1_25C6437F29C011F8_TypeDefinitionIndex = 78454;

class Class_1_25C6437F29C011F8 : public ::System::Object
{
public:
	static ::MoleMole::ConfigPointScoreCalculatePipe** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigPointScoreCalculatePipe**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25C6437F29C011F8_TypeDefinitionIndex)->GetStaticField(0x306E0);
	}
	static ::MoleMole::ConfigPointScoreCalculatePipe** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigPointScoreCalculatePipe**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25C6437F29C011F8_TypeDefinitionIndex)->GetStaticField(0x306E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_25C6437F29C011F8__CCTOR_OFFSET))();
	}
};
