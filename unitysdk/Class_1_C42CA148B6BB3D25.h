#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C42CA148B6BB3D25_METHOD_1_3145A411F6295379_OFFSET UNITYSDK_OFFSET(0x659F620)
#define CLASS_1_C42CA148B6BB3D25_METHOD_1_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0x659F4C0)

inline static constexpr unsigned int Class_1_C42CA148B6BB3D25_TypeDefinitionIndex = 79732;

class Class_1_C42CA148B6BB3D25 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C42CA148B6BB3D25_METHOD_1_6AA581BE0B50758A_OFFSET))();
	}

	static ::System::String* Method_1_3145A411F6295379(::Enum_3_121CF606CB7E9CD1_1 a1)
	{
		return ((::System::String*(*)(::Enum_3_121CF606CB7E9CD1_1))((::PBYTE)hIl2Cpp + CLASS_1_C42CA148B6BB3D25_METHOD_1_3145A411F6295379_OFFSET))(a1);
	}
};
