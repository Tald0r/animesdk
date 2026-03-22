#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3.h"
#include "unitysdk/Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_4.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationAxisEnum.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_09C6D749A1B6BB3E;
class Class_3_AF7A56E03A4D3952;
class Class_3_F35B080B137ECC46;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }

#define CLASS_3_354AF5E61C99FBD2_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x9DF00E0)
#define CLASS_3_354AF5E61C99FBD2_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9DF0620)
#define CLASS_3_354AF5E61C99FBD2_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9DF04A0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_033B211E530F77EB_1_OFFSET UNITYSDK_OFFSET(0x9DF7680)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_033B211E530F77EB_OFFSET UNITYSDK_OFFSET(0x9DF7020)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_0671A658DD7403FF_OFFSET UNITYSDK_OFFSET(0x9DF17C0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_108FD16DABAA831D_OFFSET UNITYSDK_OFFSET(0x9DF22C0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1AEC377D9EB72CDB_OFFSET UNITYSDK_OFFSET(0x9DF5120)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1BDCE7278D1CBE6C_OFFSET UNITYSDK_OFFSET(0x9DF61A0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1CF271E72B7BD354_OFFSET UNITYSDK_OFFSET(0x9DF4FD0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1D45AE07B132A82D_OFFSET UNITYSDK_OFFSET(0x9DF7910)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1FE88D8CC1F46550_OFFSET UNITYSDK_OFFSET(0x9DF9F50)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_338B0A3B37AE4517_OFFSET UNITYSDK_OFFSET(0x9DF0980)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_46B98E3BEE918F5B_OFFSET UNITYSDK_OFFSET(0x9DF0E00)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_4D732BAD9E6CED82_OFFSET UNITYSDK_OFFSET(0x9DF9B50)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_5002EF5B1187AC44_OFFSET UNITYSDK_OFFSET(0x9DF2A30)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_500BDD1E218E20AB_OFFSET UNITYSDK_OFFSET(0x9DF2160)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_52510BD88B41746B_OFFSET UNITYSDK_OFFSET(0x9DF66C0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_5288AE7839DAE123_OFFSET UNITYSDK_OFFSET(0x9DF5390)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_5D50EC58131768DD_OFFSET UNITYSDK_OFFSET(0x9DFB400)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_5EB8FB5EC9256F6E_OFFSET UNITYSDK_OFFSET(0x9DF1070)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_61B9BF922649EC12_OFFSET UNITYSDK_OFFSET(0x9DF2E70)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_63E4D7363C6B4DFD_OFFSET UNITYSDK_OFFSET(0x9DF1980)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_68B65F501E928486_OFFSET UNITYSDK_OFFSET(0x9DFB5A0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_6AFD4F472B6E21B5_OFFSET UNITYSDK_OFFSET(0x9DF0CC0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_1_OFFSET UNITYSDK_OFFSET(0x9DF68C0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_2_OFFSET UNITYSDK_OFFSET(0x9DFBEA0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x9DF6820)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_791FD55374F4DAB8_OFFSET UNITYSDK_OFFSET(0x9DFBBC0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_7B567A313F02355E_OFFSET UNITYSDK_OFFSET(0x9DF4820)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_7C751ADAC66DDA47_OFFSET UNITYSDK_OFFSET(0x9DF9790)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_7D7BC785751818CE_OFFSET UNITYSDK_OFFSET(0x9DF71D0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_7DFE9E46521F3AF1_OFFSET UNITYSDK_OFFSET(0x9DF6C30)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_81B0A6AAA4C01A28_OFFSET UNITYSDK_OFFSET(0x9DF8190)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_824A8F47AB1FFEFB_OFFSET UNITYSDK_OFFSET(0x9DFC050)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_8697AF5AB7984C07_OFFSET UNITYSDK_OFFSET(0x9DF1C40)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_9F5ABC6DBA5EAC1D_1_OFFSET UNITYSDK_OFFSET(0x9DF52B0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_9F5ABC6DBA5EAC1D_OFFSET UNITYSDK_OFFSET(0x9DFA3F0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_A34FAD7A3FD7AD04_OFFSET UNITYSDK_OFFSET(0x9DF2CE0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_A49C1E5D23185067_OFFSET UNITYSDK_OFFSET(0x9DF6CB0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_B92C201D8A952035_OFFSET UNITYSDK_OFFSET(0x9DF55B0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_BA4D8AC6C8F5E98C_OFFSET UNITYSDK_OFFSET(0x9DF7830)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x9DFBF20)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_BF720E08C4EFDE67_OFFSET UNITYSDK_OFFSET(0x9DF6930)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_C4EE785DCD7F9014_OFFSET UNITYSDK_OFFSET(0x9DF1E60)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_C7936F11B6D8251A_OFFSET UNITYSDK_OFFSET(0x9DF9330)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9DFBFF0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9DFC290)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9DFBF90)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CC943AA70AE776C1_OFFSET UNITYSDK_OFFSET(0x9DF62C0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CF13678EFD7C2C84_OFFSET UNITYSDK_OFFSET(0x9DF3850)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_D0EC10BACB5DC7D3_OFFSET UNITYSDK_OFFSET(0x9DFB360)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_D45FB0070F323FE9_OFFSET UNITYSDK_OFFSET(0x9DF7C50)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E04CA61664E84865_OFFSET UNITYSDK_OFFSET(0x9DFAC20)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E33F53EB083F6486_OFFSET UNITYSDK_OFFSET(0x9DF8090)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E45785348CC14D7F_OFFSET UNITYSDK_OFFSET(0x9DF1670)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E5C5445AC3855739_OFFSET UNITYSDK_OFFSET(0x9DF5BB0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E8F40979B3DD5EA5_1_OFFSET UNITYSDK_OFFSET(0x9DFA960)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E8F40979B3DD5EA5_OFFSET UNITYSDK_OFFSET(0x9DF2770)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_EABB948D2A6D5800_OFFSET UNITYSDK_OFFSET(0x9DFA4D0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_EF5C23E6D38522FB_OFFSET UNITYSDK_OFFSET(0x9DFA7F0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_F97BA222C6BA7F7D_OFFSET UNITYSDK_OFFSET(0x9DFBA70)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_FCDDE4251AB3AA45_OFFSET UNITYSDK_OFFSET(0x9DF1160)
#define CLASS_3_354AF5E61C99FBD2_UPDATE_OFFSET UNITYSDK_OFFSET(0x9DF07A0)
#define CLASS_3_354AF5E61C99FBD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DF0940)
#define CLASS_3_354AF5E61C99FBD2__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF0920)

inline static constexpr unsigned int Class_3_354AF5E61C99FBD2_TypeDefinitionIndex = 51711;

class Class_3_354AF5E61C99FBD2 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Single* StaticGet_Field_3_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_354AF5E61C99FBD2_TypeDefinitionIndex)->GetStaticField(0xE070);
	}
	static ::System::Single* StaticGet_Field_3_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_354AF5E61C99FBD2_TypeDefinitionIndex)->GetStaticField(0xE074);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_LATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_UPDATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_338B0A3B37AE4517(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3& a1)
	{
		return ((::System::Boolean(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_338B0A3B37AE4517_OFFSET))(a1);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_5EB8FB5EC9256F6E(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_5EB8FB5EC9256F6E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FCDDE4251AB3AA45(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_FCDDE4251AB3AA45_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_E45785348CC14D7F(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E45785348CC14D7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0671A658DD7403FF(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_0671A658DD7403FF_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_C4EE785DCD7F9014(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_C4EE785DCD7F9014_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_500BDD1E218E20AB(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3& a1)
	{
		return ((::System::Void(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_500BDD1E218E20AB_OFFSET))(a1);
	}

	static ::System::Void Method_3_108FD16DABAA831D(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2, ::System::Boolean a3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex, ::System::Boolean, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_108FD16DABAA831D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_CF13678EFD7C2C84(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3& a1)
	{
		return ((::System::Void(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CF13678EFD7C2C84_OFFSET))(a1);
	}

	static ::System::Void Method_3_5288AE7839DAE123(::UnityEngine::Vector3 a1, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a2, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_4& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_5288AE7839DAE123_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_B92C201D8A952035(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_B92C201D8A952035_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_61B9BF922649EC12(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_61B9BF922649EC12_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CC943AA70AE776C1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CC943AA70AE776C1_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_1BDCE7278D1CBE6C(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3, ::FluffyUnderware::Curvy::CurvySplineSegment* a4)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1BDCE7278D1CBE6C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_3_52510BD88B41746B(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_52510BD88B41746B_OFFSET))(a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_1(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_1_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_A34FAD7A3FD7AD04(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_A34FAD7A3FD7AD04_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BF720E08C4EFDE67(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_BF720E08C4EFDE67_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_7DFE9E46521F3AF1(::Class_3_AF7A56E03A4D3952* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_7DFE9E46521F3AF1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7B567A313F02355E(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3& a1)
	{
		return ((::System::Void(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_7B567A313F02355E_OFFSET))(a1);
	}

	static ::System::Void Method_3_A49C1E5D23185067(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_A49C1E5D23185067_OFFSET))(a1);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_E5C5445AC3855739(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E5C5445AC3855739_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_033B211E530F77EB(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_033B211E530F77EB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_7D7BC785751818CE(::FluffyUnderware::Curvy::CurvySplineSegment* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_7D7BC785751818CE_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_033B211E530F77EB_1(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_033B211E530F77EB_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BA4D8AC6C8F5E98C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_BA4D8AC6C8F5E98C_OFFSET))(a1);
	}

	static ::System::Void Method_3_1D45AE07B132A82D(::Class_3_AF7A56E03A4D3952* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1D45AE07B132A82D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D45FB0070F323FE9(::Class_3_F35B080B137ECC46* a1, ::Class_3_AF7A56E03A4D3952* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_D45FB0070F323FE9_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_C7936F11B6D8251A(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_C7936F11B6D8251A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_1CF271E72B7BD354(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3& a1)
	{
		return ((::System::Boolean(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1CF271E72B7BD354_OFFSET))(a1);
	}

	static ::System::Void Method_3_4D732BAD9E6CED82(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_4D732BAD9E6CED82_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_E33F53EB083F6486(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E33F53EB083F6486_OFFSET))(a1);
	}

	static ::System::Void Method_3_1FE88D8CC1F46550(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1FE88D8CC1F46550_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_1AEC377D9EB72CDB(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1AEC377D9EB72CDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EABB948D2A6D5800(::Class_3_F35B080B137ECC46* a1, ::Class_3_AF7A56E03A4D3952* a2, ::Class_3_09C6D749A1B6BB3E* a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_AF7A56E03A4D3952*, ::Class_3_09C6D749A1B6BB3E*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_EABB948D2A6D5800_OFFSET))(a1, a2, a3);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_9F5ABC6DBA5EAC1D(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_9F5ABC6DBA5EAC1D_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveType Method_3_EF5C23E6D38522FB(::MoleMole::Battle::CurveMoveComponent_Config_MoveType a1, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_4& a2)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveType(*)(::MoleMole::Battle::CurveMoveComponent_Config_MoveType, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_EF5C23E6D38522FB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8697AF5AB7984C07(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_8697AF5AB7984C07_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_46B98E3BEE918F5B(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_46B98E3BEE918F5B_OFFSET))(a1, a2, a3);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_6AFD4F472B6E21B5(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_6AFD4F472B6E21B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E04CA61664E84865(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E04CA61664E84865_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_63E4D7363C6B4DFD(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_63E4D7363C6B4DFD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_81B0A6AAA4C01A28(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_81B0A6AAA4C01A28_OFFSET))(a1);
	}

	static ::System::Void Method_3_F97BA222C6BA7F7D(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_4& a1)
	{
		return ((::System::Void(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_F97BA222C6BA7F7D_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_5D50EC58131768DD(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_5D50EC58131768DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68B65F501E928486(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_68B65F501E928486_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_2(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_2_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_E8F40979B3DD5EA5(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E8F40979B3DD5EA5_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::OrientationAxisEnum Method_3_D0EC10BACB5DC7D3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::FluffyUnderware::Curvy::OrientationAxisEnum(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_D0EC10BACB5DC7D3_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_9F5ABC6DBA5EAC1D_1(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_9F5ABC6DBA5EAC1D_1_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_5002EF5B1187AC44(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_5002EF5B1187AC44_OFFSET))(a1);
	}

	static ::System::Void Method_3_791FD55374F4DAB8(::UnityEngine::Quaternion a1, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType a2, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_4& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Quaternion, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_4&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_791FD55374F4DAB8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E8F40979B3DD5EA5_1(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E8F40979B3DD5EA5_1_OFFSET))(a1);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_824A8F47AB1FFEFB(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_824A8F47AB1FFEFB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7C751ADAC66DDA47(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment*& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_7C751ADAC66DDA47_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}
};
