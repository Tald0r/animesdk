#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_67FC18D32B1D1BAF;
class Class_2_CD42631606067E6B;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }

#define CLASS_2_67FC18D32B1D1BAF_CLASS_1_E9BD07499FB8EA38_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x6CF45D0)
#define CLASS_2_67FC18D32B1D1BAF_CLASS_1_E9BD07499FB8EA38_METHOD_1_9ED02EE579F02CF6_OFFSET UNITYSDK_OFFSET(0x6CF4620)
#define CLASS_2_67FC18D32B1D1BAF_CLASS_1_E9BD07499FB8EA38__CTOR_OFFSET UNITYSDK_OFFSET(0x6CF45C0)

inline static constexpr unsigned int Class_2_67FC18D32B1D1BAF_Class_1_E9BD07499FB8EA38_TypeDefinitionIndex = 59252;

class Class_2_67FC18D32B1D1BAF_Class_1_E9BD07499FB8EA38 : public ::System::Object
{
public:
	::MoleMole::Config::StageEntry* Field_1_2; // 0x10
	::Class_2_67FC18D32B1D1BAF* Field_1_0; // 0x18
	::Class_2_CD42631606067E6B* Field_1_4; // 0x20
	::MoleMole::Battle::Entity* Field_1_5; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Boolean Field_1_3; // 0x31
	::System::Boolean Field_1_6; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_CLASS_1_E9BD07499FB8EA38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_CLASS_1_E9BD07499FB8EA38_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_1_9ED02EE579F02CF6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_67FC18D32B1D1BAF_CLASS_1_E9BD07499FB8EA38_METHOD_1_9ED02EE579F02CF6_OFFSET))(this, a1);
	}
};
