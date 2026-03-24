#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_27B64C371CD70710.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

class Class_1_AEF92A7C1EC8C33D;
class Class_1_C5CEA8DD589BD643;

#define CLASS_2_B023D8B93CE04EB7_METHOD_2_0C9FF1F5C36D4965_OFFSET UNITYSDK_OFFSET(0x1A774780)
#define CLASS_2_B023D8B93CE04EB7_METHOD_2_9C5BA636FAD3AC50_OFFSET UNITYSDK_OFFSET(0x1A775A30)
#define CLASS_2_B023D8B93CE04EB7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A775B50)

inline static constexpr unsigned int Class_2_B023D8B93CE04EB7_TypeDefinitionIndex = 82302;

class Class_2_B023D8B93CE04EB7 : public ::Class_1_27B64C371CD70710
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B023D8B93CE04EB7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0C9FF1F5C36D4965(::Class_1_AEF92A7C1EC8C33D* a1, ::Class_1_AEF92A7C1EC8C33D* a2, ::Class_1_C5CEA8DD589BD643* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AEF92A7C1EC8C33D*, ::Class_1_AEF92A7C1EC8C33D*, ::Class_1_C5CEA8DD589BD643*))((::PBYTE)hIl2Cpp + CLASS_2_B023D8B93CE04EB7_METHOD_2_0C9FF1F5C36D4965_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_E614D3B245F96744 Method_2_9C5BA636FAD3AC50(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::Struct_2_E614D3B245F96744(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B023D8B93CE04EB7_METHOD_2_9C5BA636FAD3AC50_OFFSET))(this, a1, a2, a3, a4);
	}
};
