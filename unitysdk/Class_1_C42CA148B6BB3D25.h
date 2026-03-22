#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_6.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C42CA148B6BB3D25_METHOD_1_3145A411F6295379_OFFSET UNITYSDK_OFFSET(0x7C72710)
#define CLASS_1_C42CA148B6BB3D25_METHOD_1_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0x7C727D0)

inline static constexpr unsigned int Class_1_C42CA148B6BB3D25_TypeDefinitionIndex = 65050;

class Class_1_C42CA148B6BB3D25 : public ::System::Object
{
public:
	static ::System::String* Method_1_3145A411F6295379(::Enum_3_121CF606CB7E9CD1_6 a1)
	{
		return ((::System::String*(*)(::Enum_3_121CF606CB7E9CD1_6))((::PBYTE)hIl2Cpp + CLASS_1_C42CA148B6BB3D25_METHOD_1_3145A411F6295379_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C42CA148B6BB3D25_METHOD_1_6AA581BE0B50758A_OFFSET))();
	}
};
