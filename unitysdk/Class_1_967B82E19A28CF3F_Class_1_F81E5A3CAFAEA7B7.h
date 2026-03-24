#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_967B82E19A28CF3F_Class_1_4C8BDA2D1EF71B8C_8;
namespace MoleMole::Config { class ConfigShaderCustomFogMap; }

#define CLASS_1_967B82E19A28CF3F_CLASS_1_F81E5A3CAFAEA7B7_METHOD_1_76F733EEDC05694F_OFFSET UNITYSDK_OFFSET(0x77EB440)
#define CLASS_1_967B82E19A28CF3F_CLASS_1_F81E5A3CAFAEA7B7__CTOR_OFFSET UNITYSDK_OFFSET(0x77EB430)

inline static constexpr unsigned int Class_1_967B82E19A28CF3F_Class_1_F81E5A3CAFAEA7B7_TypeDefinitionIndex = 51173;

class Class_1_967B82E19A28CF3F_Class_1_F81E5A3CAFAEA7B7 : public ::System::Object
{
public:
	::Class_1_967B82E19A28CF3F_Class_1_4C8BDA2D1EF71B8C_8* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_CLASS_1_F81E5A3CAFAEA7B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_76F733EEDC05694F(::MoleMole::Config::ConfigShaderCustomFogMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShaderCustomFogMap*))((::PBYTE)hIl2Cpp + CLASS_1_967B82E19A28CF3F_CLASS_1_F81E5A3CAFAEA7B7_METHOD_1_76F733EEDC05694F_OFFSET))(this, a1);
	}
};
