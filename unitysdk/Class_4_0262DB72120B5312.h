#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

#define CLASS_4_0262DB72120B5312_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x6C96D80)
#define CLASS_4_0262DB72120B5312_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x6C96FB0)
#define CLASS_4_0262DB72120B5312_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x6C96F50)
#define CLASS_4_0262DB72120B5312_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x6C96E60)
#define CLASS_4_0262DB72120B5312__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C96DE0)
#define CLASS_4_0262DB72120B5312__CTOR_OFFSET UNITYSDK_OFFSET(0x6C96F40)

inline static constexpr unsigned int Class_4_0262DB72120B5312_TypeDefinitionIndex = 42390;

class Class_4_0262DB72120B5312 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x110; // 0x0
	::MoleMole::HollowChessboard::RenderDataHandle Field_4_1; // 0x50
	::MoleMole::HollowChessboard::HollowChessboardUID Field_4_2; // 0x60
	::System::Boolean Field_4_3; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_0262DB72120B5312* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_0262DB72120B5312*(*)())((::PBYTE)hIl2Cpp + CLASS_4_0262DB72120B5312_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}
};
